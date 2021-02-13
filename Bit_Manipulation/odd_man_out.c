/*
Given an array containing n numbers, in which, all the numbers are present even number of times except 
for one number which is occurring odd number of times. Find this odd man out in linear time i.e. without making double scan of the array.

Complete the findOddMan() function which accepts an array of integers, arr as parameter
and must return an integer denoting the element in array occurring odd number of times.

*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

int main()
{
  int arr_count = parse_int(ltrim(rtrim(readline())));
  int* arr = malloc(arr_count * sizeof(int));
  for (int i = 0; i < arr_count; i++) {
    int arr_item = parse_int(ltrim(rtrim(readline())));
    *(arr + i) = arr_item;
  }
  int result = findOddMan(arr_count, arr);
  printf("%d\n", result);
  return 0;
}
int findOddMan(int arr_count, int* arr) {

  int b[100] = {0};
  
  for(int i = 0 ; i < arr_count ; i++)
    b[arr[i]]++;
  
  for(int  i = 0 ;i < 100 ; i++)
    if(b[i] & 1)
      return i;
}


char* readline() {
  size_t alloc_length = 1024;
  size_t data_length = 0;

  char* data = malloc(alloc_length);

  while (true) {
    char* cursor = data + data_length;
    char* line = fgets(cursor, alloc_length - data_length, stdin);

    if (!line) {
      break;
    }

    data_length += strlen(cursor);

    if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
      break;
    }

    alloc_length <<= 1;

    data = realloc(data, alloc_length);

    if (!data) {
      data = '\0';

      break;
    }
  }

  if (data[data_length - 1] == '\n') {
    data[data_length - 1] = '\0';

    data = realloc(data, data_length);

    if (!data) {
      data = '\0';
    }
  } else {
    data = realloc(data, data_length + 1);

    if (!data) {
      data = '\0';
    } else {
      data[data_length] = '\0';
    }
  }

  return data;
}

char* ltrim(char* str) {
  if (!str) {
    return '\0';
  }

  if (!*str) {
    return str;
  }

  while (*str != '\0' && isspace(*str)) {
    str++;
  }

  return str;
}

char* rtrim(char* str) {
  if (!str) {
    return '\0';
  }

  if (!*str) {
    return str;
  }

  char* end = str + strlen(str) - 1;

  while (end >= str && isspace(*end)) {
    end--;
  }

  *(end + 1) = '\0';

  return str;
}

int parse_int(char* str) {
  char* endptr;
  int value = strtol(str, &endptr, 10);

  if (endptr == str || *endptr != '\0') {
    exit(EXIT_FAILURE);
  }

  return value;
}
