#include<stdio.h>
int find_gcd(int , int );

int main()
{
    int a, b, gcd;
    printf("Enter two numbers to find GCD of \n");
    scanf("%d%d", &a, &b);
    gcd = find_gcd(a, b);
    printf("GCD of %d and %d is: %d\n", a, b, gcd);
    return 0;
}

// defining the function
int find_gcd(int x, int y)
{
    if(x > y)
        find_gcd(x-y, y);

    else if(y > x)
        find_gcd(x, y-x);
    else
    return x;
}
