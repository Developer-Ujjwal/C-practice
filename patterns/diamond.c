#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a number:");
    scanf("%d", &n);
    int nsp = n / 2;
    int nst = 1;
    int ml = n/2 + 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        if (i < ml)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        printf("\n");
    }

    /*for(i=1;i<=n/2 +1;i++)
    {
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        nsp--;

        for(int k=1;k<=nst;k++)
        {
            printf("*");
        }
        nst+=2;
        printf("\n");
    }
    nsp++;
    nst=nst-2;
    for(i=1;i<=n/2;i++)
    {
        nsp++;
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        nst=nst-2;
        for(int k=1;k<=nst;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    */
}