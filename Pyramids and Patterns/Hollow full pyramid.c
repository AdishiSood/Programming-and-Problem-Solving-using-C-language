#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i, j, k = 0;
for (i = 1; i <= n; i++)
{
for (j = i; j < n; j++) {
printf(" ");
}
while (k != (2 * i – 1)) {
if (k == 0 || k == 2 * i – 2)
printf("*");
else
printf(" ");
k++;
;
}
k = 0;
printf("\n"); // print next row
}
for (i = 0; i < 2 * n – 1; i++) {
printf("*");
}
}
