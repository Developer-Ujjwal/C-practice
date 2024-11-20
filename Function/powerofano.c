#include<stdio.h>
int powe(int n,int p)
{
    int i,j=1;
    for(i=1;i<=p;i++)
    {
        j=j*n;
    }
    return j;

}
int main()
{
    int i,j,n,p;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the power:");
    scanf("%d",&p);
    
    printf("%d",powe(n,p));
    return 0;
}