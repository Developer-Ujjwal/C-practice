#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum=0;
        scanf("%d",&n);
    int* a =(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of all elements is %d",sum);
    free(a);
return 0;
}