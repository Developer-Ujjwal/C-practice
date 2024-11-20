#include <stdio.h>
#include <string.h>

int main()
{
    char password[9];
    int lower = 0, upper = 0, digit = 0, special = 0;
enter:
    printf("Enter your password of lenght 8: ");
    scanf("%s", password);
    int len = strlen(password);
    if (len == 8)
    {
        for (int i = 0; password[i] != '\0'; i++)
        {
            if (password[i] >= 'a' && password[i] <= 'z')
                lower = 1;
            else if (password[i] >= 'A' && password[i] <= 'Z')
                upper = 1;
            else if (password[i] >= '0' && password[i] <= '9')
                digit = 1;
            else
                special = 1;
        }

        if (lower && upper && digit && special)
            printf("Password strength: Strong\n");
        else if (lower && digit && special)
            printf("Password strength: Average\n");
        else
            printf("Password strength: Poor\n");
    }
    else
       { printf("Entered Password is not of length 8 \n");
         goto enter;}
    return 0;
}