#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter a no.");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            j=1;
            break;
        }
    }
    if(j=1)
        printf("%d is not a prime Number.",n);
        else
        printf("%d is a prime number.",n);
    
    return 0;
}

