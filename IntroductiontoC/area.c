#include<stdio.h>
int main()
{
    int r,l,h,ar;
    float ac;
    printf("Enter the radius:");
    scanf("%d",&r);
    printf("\nEnter the length and height:");
    scanf("%d %d",&l,&h);
    ac=(float)3.14*r*r;
    ar=l*h;
    printf("The area of the circle is %f \n",ac);
    printf("The area of the rectangle is %d \n",ar);
    return 0;
}