#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("Enter another number: ");
    scanf("%d", &j);
    printf("Sum of two number entered is %d\n", i + j);
    printf("Subtraction of two number entered is %d\n", i - j);
    printf("Multiplication of two number entered is %d\n", i * j);
    printf("Division of two number entered is %f\n", (float)i / j);
    if (i < j)
    {
        printf("%d is less than %d\n", i, j);
    }
    if (i > j)
    {
        printf("%d is greater than %d\n", i, j);
    }
    if (i == j)
    {
        printf("Numbers Entered are equal\n");
    }
    if (i != j)
    {
        printf("Entered Number are different\n", i, j);
    }
    printf("Enter third Number: ");
    scanf("%d", &k);
    if (i > j && i > k)
    {
        printf("%d is the largest number\n", i);
    }

    if (j > i || j > k)
    {
        printf("%d is not the largest number\n", i);
    }

    if (!(i == j))
    {
        printf("%d is not equal to %d\n", i, j);
    }
    n = i & j;
    printf("%d & %d = %d\n", i, j, n);
    n = i | j;
    printf("%d | %d = %d\n", i, j, n);
    n = i ^ j;
    printf("%d ^ %d = %d\n", i, j, n);
    return 0;
}