#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, len;
    char r[1], str[1000];
    printf("Enter the string:");
    scanf("%s", str);
    printf("Enter the character to remove:");
    scanf("%s", r);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == r[0])
        {
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
                i--;
            }
        }
    }
    printf("%s",str);
    
    return 0;
}