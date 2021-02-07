/*

Krishnamurthy Number:- It is a number that is equal to the sum of the factorial of all its digits.
For example 1, 2, 145. Sometimes it is also called as a Strong number or Peterson number. In this post, we will write a program for Krishnamurthy Number in C.

Examples of Krishnamurthy Number
1! = 1
So, 1 is a Krishnamurthy number.

Similarly,
2! = 1*2 = 2
2 is also a Krishnamurthy number.
145
=> 1! + 4! + 5!
=> 1 + 24 + 120
=> 145
The sum of the factorial of individual digits is the same as the original number 145. Hence, 145 is a Krishnamurthy number.

Similarly,
40585
=> 4! + 0! + 5! + 8! + 5!
=> 24 +1 + 120 + 40320 + 120
=> 40585

Hence the numbers 1, 2, 145 and 40585 are Krishnamurthy number.

151
=> 1! + 5! + 1!
=> 1 + 120 + 1
=> 122
The sum of the factorial of each individual digits is 122, which is not the same as the original number 151. It is not a Krishnamurthy number.


*/
#include<stdio.h>
int main()
{
  int number, temp, sum, currentDigit, fact;
  printf("Enter an Integer: ");
  scanf("%d",&number);
  temp = number;
  sum = 0;

  while(temp!=0)
  {
    currentDigit = temp % 10;
    fact = 1;

    // finding factorial of the currentDigit
    for(int i=1; i<=currentDigit; i++)
    {
      fact *= i;
    }

    sum += fact;
    temp /= 10;
  }

  if(sum == number)
  {
    printf("%d is Krishnamurthy Number.",number);
  }
  else
  {
    printf("%d is not a Krishnamurthy Number.",number);
  }

  return 0;
}
