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
    printf("Enter number to insert:");
    scanf("%d", &j);
    printf("Enter position to insert:");
    scanf("%d", &k);
    n=n+1;
    int b[n];
    for(i=0;i<k-1;i++)
    {
        b[i]=a[i];
    }
    for (i =k-1;i<n;i++)
    {
        b[i+1]=a[i];
    }
    b[k-1]=j;
        printf("New Array:");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", b[i]);
    }
    return 0;

}