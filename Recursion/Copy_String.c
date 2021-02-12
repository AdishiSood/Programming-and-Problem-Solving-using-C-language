#include <stdio.h>
 
void copyString(char [], char [], int);
 
int main()
{
    char str1[20], str2[20]; 
    printf(" Input the  string to copy : ");
    scanf("%s", str1);
    copyString(str1, str2, 0);
    printf(" The first string is : %s\n", str1);
    printf(" The copied string is : %s\n\n", str2);
    return 0;
}
 
void copyString(char str1[], char str2[], int ctr)
{
    str2[ctr] = str1[ctr];
    if (str1[ctr] == '\0')
        return;
    copyString(str1, str2, ctr + 1);
}
