#include <stdio.h>
int main()
{
    int i, j, n, sum = 0, max, min;
    float avg;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i <n; i++)
    {
        printf("Enter the %d element of an array\n", i+1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = (float)sum / 2;
    max = arr[0];
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("The sum of the elements is %d\n", sum);
    printf("The average of the elements is %f\n", avg);
    printf("The maximum of the elements is %d\n", max);
    printf("The minimum of the elements is %d\n", min);
    return 0;
}