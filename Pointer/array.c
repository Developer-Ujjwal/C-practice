#include <stdio.h>

int main()
{
    int a, b, j,m;
    printf("Enter a and b : ");
    scanf("%d%d", &a, &b);
    printf("Enter the operator want to use 1.logical,2.relational,biwise operator,4.Arithmatic:  ");
    scanf("%d", &m);

    switch (m)
    {
    case 1:
        if (a > 20 && a < 10 || b == 10 && b == 20)
        {
            printf("true");
        }
        else
        {
            printf("False");
        }
    case 2:
        if (a > b)
        {
            printf("a is greater");
        }
        else
        {
            printf("b is greater");
        }
    case 3:
        printf("%d", a & b);
    case 4:
        printf("Enter Number for operators 1.+ , 2.-\n");
        scanf("%d", &j);

        switch (j)
        {
        case 1:
            printf("%d", a + b);
            break;
        case 2:
            printf("%d", a - b);
            break;
        default:
            printf("Enter appropriate Number");
        }
    }
    return 0;
}