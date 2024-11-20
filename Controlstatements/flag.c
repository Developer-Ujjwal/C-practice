#include <stdio.h>
int main()
{
    for (int i = 1; i <= 13; i++)
    {
        for (int j = 1; j <= 25; j++)
        {
            if(i==1||i==5||i==9||i==13||j==1||j==25)
            {
                printf("# ");
            }
            else 
            {
                if(i==6&&(j==12||j==14))
            {
                printf("* ");
            }
            else if(i==7 && (j==11||j==15))
            {printf("* ");}
            else if(i==8 && (j==12||j==14))
            printf("* ");
             else printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}