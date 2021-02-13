#include <stdio.h>
int main()
{
  int t, num, set_bits;
  scanf("%d",&t);
  while(t>0)
  {
    scanf("%d",&num);
    set_bits = countBits(num);
    printf("%d\n",set_bits);
    t--;
  }
  return 0;
}
int countBits(int num)
{
  int a = 1,count = 0;
  while(num)
  {
    a = a<<1;
    if(a>num)
    {
      count++;
      num -= a>>1;
      a = 1;
    }
  }
  return count;
}
