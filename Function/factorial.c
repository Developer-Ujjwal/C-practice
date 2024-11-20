#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        int p=1;
        for (int i=1;i<=n;i++)
        {
            p=p*i;
        }
        return p;
    }
}

int main()
{
    int m,n;
    printf("Enter a no.:");
    scanf("%d", &n);
    m=fact(n);
    printf("%d",m);
    return 0;
}