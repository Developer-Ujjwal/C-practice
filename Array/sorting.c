#include <stdio.h>
int main()
{
    int i, j, n, temp;
    int arr[n];
    printf("Enter the size of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of an array ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array in ascending order:");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}