#include<stdio.h>
int main ()
{
    int i,j=0,k,l=0,m,n;
    printf("Enter a Number-");
    scanf("%d",n);
    k=n;
    while(n>0)
    {
        n=n/10;
        l=l+1;
    }

    while(n>0)
   { i=n%10;
     n=n/10;
     j=j+i^l;
    }
    if(j==k)
    printf("%d is a armstrong no.",k);
    else 
    printf("%d is not a armstrong no.",k);

    return 0;
}

