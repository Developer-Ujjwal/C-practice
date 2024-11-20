#include<stdio.h>
int main()
{
    int n;
    float c,f;
    printf("Click the button To Convert Temperature \n 1.Celsius to Fahrenheit \n 2.Fahrenheit to celsius \n ");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("Enter the Temperature in Celsius:");
        scanf("%f",&c);
        f=c*1.8 +32;
        printf("The Temperature in fahrenheit is %f",f);
        break;
        case 2: printf("Enter the temperature in fahrenheit: ");
        scanf("%f",&f);
        c=(f-32)/1.8;
        printf("The Temperature in celsius is %f",c);
        break;
    }
        return 0;
}