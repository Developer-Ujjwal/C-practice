#include<stdio.h>
int max(int i,int j,int k)
{
    int max=i;
    if (j>max)
    max=j;
    if (k>max)
    max=k;
    return max;
}
int main()
{
    int i,j,k,n;
    printf("Enter three numbers:");
    scanf("%d %d %d",&i,&j,&k);
    printf("Max of entered numbers is %d",max(i,j,k));
    return 0;
}