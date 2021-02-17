#include <stdio.h>
 
void main()
{
    int j = 31, i, count = 0;
    unsigned int num;
    int b[32] = {0};
 
    printf("enter the number:");
    scanf("%d", &num);
    while (num != 0)
    {
        if (num & 1 == 1)
        {
            break;
        }
        else
        {
            count++;
            num = num >> 1;
 
        }
    }
    printf("\n%d", count);
}
