#include <stdio.h>
int main()
{
    int i = 3, j = 0, k = 1, l, n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Enter appropriate Number");
    }
    if (n == 1)
    {
        printf("0");
    }
    if (n == 2)
    {
        printf("0 1 ");
    }
    if (n >= 3)
    {
        printf("0 1 ");
        while (n >= i)
        {

            l = j + k;
            printf("%d ", l);
            j = k;
            k = l;
            i++;
        }
    }
    return 0;
}