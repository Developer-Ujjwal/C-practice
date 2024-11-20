#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char temp;
    int i,j,n,k,len;
    printf("Enter a string:");
    gets(str);
    len=strlen(str);
    printf("%d",len);
    
       
     for(i=0,j=len-1;i<=j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s",str);

    return 0;

}