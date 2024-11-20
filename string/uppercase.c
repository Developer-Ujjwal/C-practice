#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,n,m;
    char str[1000];
    printf("Enter a string");
    scanf("%[^\n]s",str);
    
    for(i=0;i<1000;i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
       printf("New String:");
        printf("%s ", str);
return 0;
}