#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1) 
    return 1;
    else
    return n*fact(n-1);

}
int main()
{
    int n,m;
    printf("Enter the number:");
    scanf("%d",&n);
    m=fact(n);
    printf("%d",m);
    return 0;
}