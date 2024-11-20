#include <stdio.h>
int main()
{
    int i=1, j=1, n;
    printf("Enter a number:");
    scanf("%d", &n);
    while(i<=n)
    {
        j=i*j;
        i++;
    }
    printf("The factorial of the number is %d",j);
    return 0;
}