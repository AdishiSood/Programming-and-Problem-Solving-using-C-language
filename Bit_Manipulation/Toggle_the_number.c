/*

You are given a number N and another number k. 
Print the number after toggling all bits of N except the kth bit (0 based indexing on 64-bit machine where integer takes 4 bytes).

*/

#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int test;
  scanf("%d",&test);
  
  while(test--)
  {
    int n , k;
    scanf("%d %d",&n,&k);
    printf("%d\n",~(n ^ ( 1 << k )));
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
