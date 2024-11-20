#include <stdio.h>
int main()
{
    int i, j = 0, k = 0, n;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; n > 0; i++)
    {
        if (i % 2 == 0)
        {
            j = j + n % 10;
        }
        else
        {
            k = k + n % 10;
        }
        n = n / 10;
    }
    if ((i - 1) % 2 == 0)
    {
        printf("%d", k);
    }
    else
    {
        printf("%d", j);
    }
    return 0;
}