#include<stdio.h>
int main()
{
    FILE* ptr=fopen("test.txt","w");
    char str[]="Hello Ujjwal \n Welcome to the Kingdom";
    fputs(str,ptr);
    fclose(ptr);
    FILE* ptr1 =fopen("test.txt","r");
    char str1[50];
    while(fgets(str1,50,ptr1)!=NULL)
    {
        printf("%s",str1);
    }
    return 0;

}