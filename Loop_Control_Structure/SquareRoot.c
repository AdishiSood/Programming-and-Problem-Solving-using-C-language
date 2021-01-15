#include<stdio.h>
int  main()
{
    int number,t;
    float temp, sqrt;
scanf("%d", &t);
  while(t-->0)
{
    scanf("%d", &number);
    sqrt = number / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }
    if(number==1)
    {
      sqrt=1.00;
    }
    printf("%.2f\n",sqrt);
}
}
