#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int arr[10] = {0};
    char num[1000];
    scanf("%[^\n]s", num);
    for (int i = 0; i < strlen(num); i++)
    {
        if (num[i] >= '0' && num[i] <= '9')
            arr[num[i] - '0']++;
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d", arr[i]);
    }
}
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *num;
    int arr[10]={0};
    num = malloc(1024 * sizeof(char));
    scanf("%[^\n]", num);
    num = realloc(num, strlen(num) + 1);
    for (int i = 0; i < strlen(num); i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if ((*(num+i)-'0')== j)
            {
                
                arr[j]++;
            }
        }
    }
    for(int i=0;i<=9;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}*/