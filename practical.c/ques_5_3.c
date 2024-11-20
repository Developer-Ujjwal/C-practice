// If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program 
// to determine the youngest of the three. If all of them are of same age then print that “All 
// are of same age”

#include <stdio.h>

int main()
{
    int ram, shyam, ajay;

    printf("Enter the age of Ram: ");
    scanf("%d", &ram);

    printf("Enter the age of Shyam: ");
    scanf("%d", &shyam);

    printf("Enter the age of Ajay: ");
    scanf("%d", &ajay);

    if (ram == shyam == ajay)
    {
        printf("All are equal");
    }
    else if (ram == shyam)
    {
        printf("Ram and Shyam are equal");
    }
    else if (ajay == shyam)
    {
        printf("Ajay and Shyam are equal");
    }
    else if (ram == ajay)
    {
        printf("Ram and Ajay are equal");
    }
    else
    if (ram < shyam && ram < ajay)
    {
        printf("Ram is the youngest.\n");
    }
    else if (shyam < ram && shyam < ajay)
    {
        printf("Shyam is the youngest.\n");
    }
    else
    {
        printf("Ajay is the youngest.\n");
    }

    return 0;
}