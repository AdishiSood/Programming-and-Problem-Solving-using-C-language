#include<stdio.h>
 
int SumOfNumbers(int);
 
int main() 
{
   int n1;
   int sum;
   scanf("%d", &n1);
    sum =SumOfNumbers(n1);
   return (0);
}
 
int SumOfNumbers(int n1) 
{
   int res;
   if (n1 == 1) 
   {
      return (1);
   } 
   else 
   {
      res = n1 + SumOfNumbers(n1 - 1); 
   }
   return (res);
}
