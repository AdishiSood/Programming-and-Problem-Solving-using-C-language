/*

Given an array containing n elements, in which, all the elements are present even number of times except for 
two elements which occurs odd number of times. Find these two strange elements in ascending order in linear time with constant space complexity.

*/
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n;
  scanf("%d",&n);
  int a[n],b[10] = {0};
  
  for(int i = 0 ; i < n ; i++)
  {
    scanf("%d",&a[i]);
    b[a[i]]++;
  }
  
  for(int i = 0 ; i < 10 ; i++)
    if(b[i] & 1)
      printf("%d ",i);
  

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
