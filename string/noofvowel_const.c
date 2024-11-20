#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,j,n,vowel=0,cons=0;
    printf("Enter a string:");
    scanf("%[^\n]s",str);
    printf("%d",strlen(str));
    for(i=0;str[i] != '\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        vowel++;
        else if(str[i]==' ')
        continue;
        else
        cons++;

    }

    printf("Total vowels are %d",vowel);
    printf("Total consonants are %d",cons);
    return 0;
}