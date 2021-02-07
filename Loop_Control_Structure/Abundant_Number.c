/*

A number n is said to be Abundant Number to follow these condition

the sum of its proper divisors is greater than the number itself.
And the difference between these two values is called the abundance.
Ex:- Abundant number 12 having a proper divisor is 1,2,3,4,6 the sum of these factor is 16 it is greater than 12 so it is a Abundant number.

Some other abundant numbers: 
18, 20, 24, 30, 36, 66, 70, 72, 78, 80, 84, 88, 90, 96, 100, 102, 104, 108, 112, 114, 120.. 
    
*/

#include<stdio.h>
int main()
{
      int number,sum=0,i;
      printf("Enter a number : "); 
      scanf("%d",&number);
      //declare a variable to store sum of factors of the number
     for(i = 1 ; i < number ; i++)
     {
           if(number % i == 0)
           sum = sum + i;
     }
     if(sum > number)
         printf("Abundant Number");
     else
         printf("Not an Abundant Number");
    return 0;
}
