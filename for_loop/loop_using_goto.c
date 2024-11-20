#include<stdio.h>
int main()
{
    int i=1,j,n;
    printf("Enter a no.:");
    scanf("%d",&n);
    go: 
    
    j=1;
    here:
    if(j<=i)
    {
    printf("*");
    j++;
    goto here;
    }
    if (i<=n-1)
   { 
    printf("\n");
    i++;
    goto go;
   }
   return 0;



}