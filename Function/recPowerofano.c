#include <stdio.h>
int po(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return n * po(n, p - 1);
    }
}
int main()
{
    int n, p, m;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Enter the power:");
    scanf("%d", &p);
    m = po(n, p);
    printf("%d", m);
    return 0;
}