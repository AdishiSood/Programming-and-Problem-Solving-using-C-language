/*

1*2*3*4*17*18*19*20
  5*6*7*14*15*16
    8*9*12*13
      10*11
      
*/
#include <stdio.h>
int main()
{
int n=5,num=1,i=1,space=0,k=1,number=n;
for(i=0;i<n;i++)
{
for(int j=1;j<=space;j++)
{

printf("-");

}
for(int m=1;m<2*n-space;m++)
{
if(m%2==0)
printf("%s","*");
else
printf(“%d”,num++);
}
printf("%s","*");
for(int l=1;l<2*n-space;l++)
{
if(l%2==0)
printf("%s","*");
else
{
printf("%d",k+number*number);
k++;
}
}
number–;

space=space+2;
printf("\n");
}
return 0;
}
