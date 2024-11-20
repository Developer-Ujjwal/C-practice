// Write a C program that will output this passage by Michael Singer. Make sure your 
//output looks exactly as shown here
#include <stdio.h>
int main()
{
    int i, j, n;
    char s = 1, d = 4, h = 3;
    for (i = 1; i <= 12; i++)
    {
        printf("%c %c %c ", s, d, h);
    }
    printf("%c\n", s);
    printf("%c \"If you are resisting something, you are feeding it.\t\t\t", d);
    printf("%c\n", d);
    printf("%c\tAny energy you fight, you are feeding it.\t\t\t", h);
    printf("%c\n", h);
    printf("%c\t\tIf you are pushing something away,\t\t\t", s);
    printf("%c\n", s);
    printf("%c\t\t\tYou are inviting it to stay.\" by Michael Singer.", d);
    printf("%c\n", d);
    for (i = 1; i <= 12; i++)
    {
        printf("%c %c %c ", s, d, h);
    }
    printf("%c\n", s);

    return 0;
}