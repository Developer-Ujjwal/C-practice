#include<stdio.h>
int greater(int n1, int n2)
{
    int* ptr1=&n1;
    int* ptr2=&n2;
    if(*ptr1>*ptr2)
    printf("%d is greater than %d",*ptr1, *ptr2);
    else if (*ptr1<*ptr2)
    printf("%d is greater than %d",*ptr2, *ptr1);
    else 
    printf("Both the number are equal");
    return 0;
}
int main()
{
    int i,j,n1,n2;
    printf("Enter a number:");
    scanf("%d",&n1);
    printf("Enter a number:");
    scanf("%d",&n2);
    int (*fun)(int ,int );
    fun=&greater;
    j=(*fun)(n1,n2);
    return 0;
}