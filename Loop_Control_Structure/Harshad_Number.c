/*

A Harshad number is a number that is  divisible by the sum of its digits. 
We use  while loop statement with following condition. Input consists of 1 integer.
Ex– Number is 21, it is divisible by own sum (1+2) of its digit(2,1)
So it is harshad number

*/

#include<stdio.h>
int main()
{
     int number,temp,sum = 0, digit, res;
    printf("enter any number : "); 
    scanf("%d",&number);
    temp = number;
   //use while loop with this condition
   while(temp!=0)
   {
       //to find last digit
        digit=temp % 10;
      //sum+=digit
        sum = sum + digit;
     //temp/=10
        temp = temp / 10;
   }
   res = number % sum;
   //check result is equal is to 0
   if(res == 0)
       printf("%d is Harshad Number",number);
   else
      printf("%d is not Harshad Number",number);
  return 0;
}
