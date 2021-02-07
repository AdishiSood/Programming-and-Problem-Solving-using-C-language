/*

Two numbers are said to be friendly pairs if they have common abundancy index. 
Or, the ratio between the sum of divisors of a number and the number itself. These numbers are also known as Amicable numbers.

We can also say that two numbers n and m are friendly numbers if

?(n)/n = ?(m)/m

Where ?(n) is the sum of divisors of n.

For instance, for numbers 6 and 28,

Divisors of 6 are- 1, 2, 3, and 6.

Divisors of 28 are- 1, 2, 4, 7, 14, and 28.

Sum of the divisors of 6 and 28 are 12 and 56 respectively.

Also, the abundant index of 6 and 28 is 2.
Therefore, 6 and 28 is a friendly pair.

*/

#include<stdio.h> 
int main()
{
      int i;
      int f_Num,s_Num;
      int f_DivisorSum = 0;
      int s_DivisorSum = 0;
       printf("Enter two numbers to check if Amicable or not : ");
       scanf("%d %d",&f_Num,&s_Num);
      for(int i=1;i<f_Num;i++)
      {
           if(f_Num % i == 0)
           f_DivisorSum = f_DivisorSum + i;
      }
     for(int i=1;i<s_Num;i++)
     {
          if(s_Num % i == 0)
              s_DivisorSum = s_DivisorSum + i;
     }
     if((f_Num == s_DivisorSum) && (s_Num == f_DivisorSum))
   
     else
     { 
         printf("%d and %d are not Amicable numbers\n",f_Num,s_Num);
     }
    return 0;
}
