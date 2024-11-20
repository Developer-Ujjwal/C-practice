#include <stdio.h>
int prime(int n)
{
    int j = 0;
    if (n == 1)
        printf("1 is neither prime nor composite");
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                j = j + 1;
        }
        if (j == 0)
            printf("%d is a prime number", n);
        else
            printf("%d is not a prime number", n);
    }
}
int main()
{
    int i, j, n;
    printf("Enter a number:");
    scanf("%d", &n);
    prime(n);
}