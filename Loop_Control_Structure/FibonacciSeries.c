#include <stdio.h>
/* Include other headers as needed */
int main()
{
int n;
scanf("%d",&n);
int a=0 , b=1 , i=0;
while(i<n)
{
if(i==(n-1))
{
printf("%d\n",a);
}
else
{
printf("%d\n%d\n",a,b);
}
i+=2;
a=a+b;
b=a+b;

}
return 0;
}
