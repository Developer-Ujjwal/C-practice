// Write a C program to find all roots of a Quadratic equation using nested switch case. 
//Take three user inputs from keyboard for finding the discriminant (b2 – 4ac). Use the 
//concept of nested switch case for finding the roots of equation. Get the outputs for roots 
//till 2 decimal points only. 
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, imaginary;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f",&a, &b, &c);

    discriminant = b*b - 4*a*c;

    switch(discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2*a);
            root2 = (-b - sqrt(discriminant)) / (2*a);
            printf("Roots are %.2f and %.2f", root1, root2);
            break;
        case 0:
            switch(discriminant < 0) {
                case 1:
                    root1 = root2 = -b / (2*a);
                    imaginary = sqrt(-discriminant) / (2*a);
                    printf("Roots are %.2f+i%.2f and %.2f-i%.2f", root1, imaginary, root2, imaginary);
                    break;
                case 0:
                    root1 = root2 = -b / (2*a);
                    printf("Roots are %.2f and %.2f", root1, root2);
                    break;
            }
            break;
    }

    return 0;
}
