#include <stdio.h>
int main()
{
    int i, j, max, n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of an array ", i + 1);
        scanf("%d", &a[i]);
    }
    max=a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    j = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > j && a[i] != max)
            j = a[i];
    }
    printf("Second largest number is %d", j);
    return 0;
}
