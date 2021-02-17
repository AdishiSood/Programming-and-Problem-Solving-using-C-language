#include <stdio.h>
typedef struct
{
  int day , month , yr;
}date;
int main()
{
    int n;
    scanf("%d",&n);
    
    date a[n];
    
    for(int i = 0; i < n; i++)
    {
      scanf("%d %d %d",&a[i].day,&a[i].month,&a[i].yr);			// scanning the input date
      
      if(a[i].month == 4 || a[i].month == 6 || a[i].month == 9 || a[i].month == 11)
      {
        a[i].day++;
        if(a[i].day > 30)
        {
          a[i].month++;
          a[i].day = 1;
        }
      }
      else if(a[i].month == 12)
      {
        a[i].day++;
        if(a[i].day > 31)
        {
          a[i].month = 1;
          a[i].day = 1;
          a[i].yr++;
        }
      }
      else if(a[i].month == 2 && (a[i].yr % 400 == 0 ||(a[i].yr % 4 == 0 && a[i].yr % 100 != 0) ) )
      {
        a[i].day++;
        if(a[i].day > 29)
        {
          a[i].month++;
          a[i].day = 1;
        }
      }
      else if(a[i].month == 2)
      {
        a[i].day++;
        if(a[i].day > 28)
        {
          a[i].month++;
          a[i].day = 1;
        }
      }
      else
      {
        a[i].day++;
        if(a[i].day > 31)
        {
          a[i].month++;
          a[i].day = 1;
        }
      }
    }
    
    for(int i = 0 ; i < n ;i++)
    {
      if(a[i].month<10 && a[i].day>9)
      	printf("%d-0%d-%d\n",a[i].day,a[i].month,a[i].yr);
  	  else if(a[i].month>9 && a[i].day>9)
        printf("%d-%d-%d\n",a[i].day,a[i].month,a[i].yr);
      else if(a[i].month<10 && a[i].day<9)
        printf("0%d-0%d-%d\n",a[i].day,a[i].month,a[i].yr);
      else if(a[i].month>9 && a[i].day<9)
        printf("0%d-%d-%d\n",a[i].day,a[i].month,a[i].yr);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}



