#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of an array ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the position of element to delete:");
    scanf("%d", &j);
    n = n - 1;
    int b[n];
    for (i = 0; i < j - 1; i++)
    {
        b[i] = a[i];
    }
    for (i = j - 1; i < n; i++)
    {
        b[i] = a[i + 1];
    }
    printf("New Array:");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", b[i]);
    }
    return 0;
}
