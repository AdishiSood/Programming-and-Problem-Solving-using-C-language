/*

 Find Sum of the Series 1/1! + 2/2! + 3/3! + …… +1/N!
 
*/
 
#include <stdio.h>
 
double sumseries(double);
 
int main()
{
    double number,sum;
    printf("\n Enter the value:  ");
    scanf("%lf", &number);
    sum = sumseries(number);
    printf("\n Sum of the above series = %lf ", sum);
}
 
double sumseries(double m)
{
    double sum2 = 0, f = 1, i;
    for (i = 1; i <= m; i++)
    {
        f = f * i;
        sum2 = sum2 +(i / f);
    }
    return(sum2);
}
