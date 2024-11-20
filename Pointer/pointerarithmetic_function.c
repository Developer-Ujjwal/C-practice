#include<stdio.h>
#include<string.h>
int sum(int a[])
{
    int s=0;
    for(int i=0;i<5;i++)
    {
        s=s+*(a+i);             //pointer arithmetic
    }
    
    return s;


}
int main()
{

    int i,j;
    int a[]={2,6,4,3,2};
    int (*fun)(int a[]);           //pointer function
    fun=&sum;
    j=(*fun)(a);
    printf("Sum of array is %d",j);
    
return 0;
}