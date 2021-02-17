/*

Suppose you have to organize a farewell party for one of your colleague. 
You have to buy some items from market and you want to spend less. Given required details
about all items required you have to tell the minimum amount to be paid for all the items.


*/
#include <stdio.h>
/* Include other headers as needed */
typedef struct
{
  char a[2];
  int quantity , r1 , r2;
}buy;
int main()
{
  int test;
  scanf("%d",&test);
  while(test--)
  {
    int n , res = 0;
    scanf("%d",&n);
    buy a[n];
    
    for(int i = 0; i < n ; i++)
    {
      scanf("%s %d %d %d",a[i].a,&a[i].quantity,&a[i].r1,&a[i].r2);
      res = res + a[i].quantity * (a[i].r1 < a[i].r2 ? a[i].r1 : a[i].r2) ;		// multiplying quantity with smaller price
//       printf("%d\n",res);
    }
    
    printf("%d\n",res);
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
