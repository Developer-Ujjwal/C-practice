//Write a C program to create a structure of Book Detail and display the details of the 
//book in appropriate format by passing structure as a function argument. 
//Book Detail must contain following information: 
//Book Title, Author name and Amount of book in float. 
#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float amount;
};

// Function to display book details
void display_book_details(struct Book book) {
    printf("Book Title: %s\n", book.title);
    printf("Author Name: %s\n", book.author);
    printf("Amount: %.2f\n", book.amount);
}

int main() {
    struct Book book;

    printf("Enter the book title: ");
    scanf("%s", book.title);

    printf("Enter the author name: ");
    scanf("%s", book.author);

    printf("Enter the amount of the book: ");
    scanf("%f", &book.amount);

    printf("\nBook Details:\n");
    display_book_details(book);

    return 0;
}
