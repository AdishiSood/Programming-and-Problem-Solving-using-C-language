/*


A happy number is a number defined by the following process:
Starting with any positive integer, replace the number by the sum of the squares of its digits,
and repeat the process until the number either equals 1 (where it will stay), or it loops endlessly in a cycle that does not include 1.
If it is not happy number it will end at '4'.
For Ex:- To check whether 19 is happy or not 

19=1^2+9^2=82 then we take 82 
82=8^2+2^2=68 then again we take 68
68=6^2+8^2=100
100=1^2+0^2+0^2=1
So it is Happy Number

If the number is not happy then it will end at 4.
*/


#include<stdio.h>
#include<math.h>
main()
{
 int i,j,num,temp,sum=0;
 printf("Enter number\n");
 scanf("%d",&num);
  while(sum!=1 && sum!=4)
  {
   sum=0;
   while(num>0)
  {
    j=num%10;
    sum+=(j*j);
    num=num/10; 
  }
  num=sum;
  }
  if(sum==1)
 printf("Happy Number\n");
 else
 printf("UnHappy Number\n");
}
