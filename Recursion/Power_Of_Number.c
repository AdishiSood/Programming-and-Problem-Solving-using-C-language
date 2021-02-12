#include <stdio.h>
 
long int CalcuOfPower(int x,int y)
{
    long int result=1;
    if(y == 0) return result;
    result=x*(CalcuOfPower(x,y-1)); 
 }
int main()
{
    int base,pwr;
    long int result;
    printf(" Input the base  value : ");
    scanf("%d",&base);
     
    printf(" Input the value of power : ");
    scanf("%d",&pwr);
     
    result=CalcuOfPower(base,pwr);//called the function CalcuOfPower
     
    printf(" The value of %d to the power of %d is : %ld\n\n",base,pwr,result);
     
    return 0;
}
