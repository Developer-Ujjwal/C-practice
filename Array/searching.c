#include <stdio.h>
int main()
{
    int i, j,k=0, n;
    int a[n];
    printf("Enter the size of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of an array ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter number to search:");
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            printf("Number found at position:%d \n",i+1);
            k++;
        }

    }
    if(k==0)
    printf("Entered number not found");
    return 0;
    
}