#include<stdio.h>
int factorial(int);
int main()
{
   int num, fact;
   printf("Enter any integer number:");
   scanf("%d",&num);
   fact = factorial(num);
   printf("\nfactorial of %d is: %d",num, fact);
   return 0;
}
int factorial(int n)
{
   //Factorial of 0 is 1 
   if(n==0)
      return(1);
   return(n*factorial(n-1));
}
