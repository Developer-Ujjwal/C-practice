#include<stdio.h>
int main()
{
    int i,sum=0,n;
    
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element of an array:",i+1);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        sum=sum+*(a+i);
    }
    printf("Sum of array is %d",sum);

}