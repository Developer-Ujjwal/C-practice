// A positive integer is entered through the keyboard, write a function to find the binary 
//equivalent of this number using recursion.
#include<stdio.h>
void binary(int n,int a[int j])
{
    if( n==0)
    {
        while(j<30)
        {printf("%d",a[j]);
        j++;
        }
        }
    if(n>=1)
    {a[j-1]=n%2;
    binary(n/2,a[j-1]);}
}
int main()
{
    int i,n,j=30,a[30];
    printf("Enter a number:");
    scanf("%d",&n);
    binary(n,a[30]);
return 0;
}