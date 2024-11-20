#include<stdio.h>
int main()
{
    int i,j,n,s1,s2;
    printf("Enter sides:");
    scanf("%d %d",&s1,&s2);
    for(i=1;i<=s1;i++)
    {
        for(j=1;j<=s2;j++)
        {
            if(i==1||i==s1||j==1||j==s2)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


}