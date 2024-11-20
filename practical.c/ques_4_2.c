//Write a C Program to Print multiplication table from 1 to 7 to achieve the following output.
#include<stdio.h>
int main()
{
    int i=1,j,n;
    do
    {
        j=1;
        do
        {
            printf("%d\t",i*j);
            j++;
        }while(j<=7);
        printf("\n");
        i++;
    }while(i<=10);
    
    return 0;
}