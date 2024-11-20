#include <stdio.h>

int main() {
    int num1 = 15, num2 = 25, sum;
    float fnum1 = 15.5, fnum2 = 25.5, fsum;
    char ch1 = 'a', ch2 = 'b';

    sum = num1 + num2;
    fsum = fnum1 + fnum2;

    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    printf("Sum of %f and %f is %f\n", fnum1, fnum2, fsum);
    printf("ASCII value of %c is %d\n", ch1, ch1);
    printf("ASCII value of %c is %d\n", ch2, ch2);

    return 0;
}