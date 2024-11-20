#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000], b[1000], c[1000];
    int i, n = 0, len1, len2, len3;
    printf("Enter a string:");
    scanf("%s", a);
    printf("Enter a string:");
    scanf("%s", b);
    len1 = strlen(a);
    len2 = strlen(b);
    len3 = len1 + len2;
    for (i = 0; i < len3; i++)
    {
        if (i < len1)
            c[i] = a[i];
        else
        {
            c[i] = b[n];
            n++;
        }
    }
    printf("%s", c);
    return 0;
}