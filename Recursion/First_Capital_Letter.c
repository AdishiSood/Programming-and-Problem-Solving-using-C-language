#include <stdio.h>
char checkCapital(char *);
 
int main()
{
    char str1[20], strr2;

    scanf("%s", str1);
    strr2 = checkCapital(str1);
    if (strrr2 == 0)
    {
        printf(" There is no capital letter in the string :  %s.\n", str1);
    }
    else
    {
        printf(" The first capital letter appears in the string %s is %c.\n\n", str1, strr2);    }
        return 0;
    }
    char checkCapital(char *str2)
    {
        static int i = 0;
        if (i < strlen(str2))
        {
            if (isupper(str2[i]))
            {
                return str2[i];
            }
            else
            {
                i = i + 1;
                return checkCapital(str2);
            }
        }
        else return 0;
    }
