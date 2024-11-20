//Write a C program to check if the user inputted string is palindrome or not using recursion.
#include <stdio.h>
#include <string.h>

int is_palindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;
    if (str[start] != str[end])
        return 0;
    return is_palindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int len = strlen(str) - 1;

    if (is_palindrome(str, 0, len))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
