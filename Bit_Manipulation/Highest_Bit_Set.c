#include <stdio.h>
#define NUM_BITS sizeof(int)*8
 
int highest_bit_set(int);
void display(int);
int i = NUM_BITS;
 
void main()
{
    int num, pos;
 
    printf("\nenter the number:");
    scanf("%d", &num);
 
    display(num);
    pos = highest_bit_set(num);
    printf("\nthe position of the highest bit set is %d", pos);
}
/* RETURNS THE POSITION */
int highest_bit_set(int num)
{
    int count = 0;
    while (num >> 1 != 0)
    {
        count++;
        num = num >> 1;
    }
    return(count);
}
/* DISPLAYS THE NUMBER IN BINARY REPRESENTATION */
void display(int num)
{
    int c;
    c = num & 1;
    if (i > 0)
    {
        i--;
        display(num >> 1);
    }
    printf("%d", c);
}
