#include<stdio.h>
int main()
{
    int i,n1,n2;
    float j;
 start:   
printf("Enter a Number:");
scanf("%d",&n1);
printf("Enter another number:");
scanf("%d",&n2);
printf("Operations to perform:\n");
printf(" 1. add\n 2. subtract\n 3. multiply\n 4. divide\n 0. Exit \nEnter a Number to perform operation:");
scanf("%d",&i);
switch(i)
 {
    case 1: printf("Sum of Numbers is %d\n",n1+n2);
    goto start;  
    case 2: printf("Subtraction of Numbers is %d\n",n1-n2);
    goto start;
    case 3: printf("multiplication of Numbers is %d\n",n1*n2);
    goto start;
    case 4: j=(float)n1/n2;
     printf("Division of Numbers is %f\n",j);
    goto start;
    case 0: goto start;
    default : printf("Enter appropriate value");
 }
    return 0;
}