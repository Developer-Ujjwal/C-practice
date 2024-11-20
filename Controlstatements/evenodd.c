#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n==1)
    {
        printf("%d is neither odd nor even.",n);
    }
    else if (n%2==0)
    {
        printf("%d is an even number.",n);
    }
    else
    {
        printf("%d is an odd number.",n);
    }
}