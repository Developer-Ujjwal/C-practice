#include <stdio.h>
int main()
{
    int i, j, sum = 0, n1, n2;
    printf("Enter two number:");
    scanf("%d %d", &n1, &n2);
    for (; n1 >= 1;)
    {
        n1 = n1 / 2;
        n2 = n2 * 2;
        if (n1 % 2 != 0)
        {
            sum = sum + n2;
        }
    }
    printf("%d", sum);
}