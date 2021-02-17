/*
Mr. Gopal has to book a flight for his holiday. He prefers to fly cheap. However, if two flights have same price, 
he prefers one with shorter flight duration. If two flights have same price and flight duration, he prefers to fly 
during early hours in a day. Mr. Gopal needs your help. Given description of his flight options in format
'{flight number} {departure time} {flight duration} {price}', he wants you to give him three options out of all in decreasing order of his preference.

*/

#include <stdio.h>
/* Include other headers as needed */
typedef struct
{
  char f_name[2] , c;
  int duration , price , hr , min ;
}flight;
int main()
{
  int test;
  scanf("%d",&test);
  while(test--)
  {
    int n;
    scanf("%d",&n);
    
    flight a[n];
    
    for(int i = 0 ; i < n ; i++)						// scanning the data from user
    {
      scanf("%s",a[i].f_name);
      scanf("%2d %c %2d",&a[i].hr,&a[i].c,&a[i].min);
      scanf("%d %d",&a[i].duration,&a[i].price);
    }
    
    for(int i = 0; i < n ; i++)
    {
      for(int j = 0; j < n-1; j++)
      {
        if(a[j].price > a[j+1].price)
        {
          flight temp = a[j];
          a[j] = a[j+1];
          a[j+1] = temp;
        }
      }
    }
    
    for(int j = 0; j < n-1; j++)
    {
      if(a[j].price == a[j+1].price && a[j+1].duration < a[j].duration)
      {
        flight temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
        j = 0;
          continue;
      }
      else if (a[j].price == a[j+1].price && a[j+1].duration == a[j].duration && a[j+1].hr < a[j].hr)
      {
        flight temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
    
    printf("%c%c ",a[0].f_name[0],a[0].f_name[1]);
    printf("%c%c ",a[1].f_name[0],a[1].f_name[1]);
    printf("%c%c\n",a[2].f_name[0],a[2].f_name[1]);
    
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}







