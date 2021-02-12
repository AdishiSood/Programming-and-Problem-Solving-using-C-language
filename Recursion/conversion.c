/*
This is a C program to convert a number decimal system to binary system using recursion.
*/

#include <stdio.h>
 
int conversion(int);
 
int main()
{
    int dec, bin;
 
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    bin = conversion(dec);
    printf("The binary equivalent of %d is %d.\n", dec, bin);
 
    return 0;
}
 
int conversion(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * conversion(dec / 2));
    }
}
