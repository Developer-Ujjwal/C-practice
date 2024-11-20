//Write a C program for collecting and displaying employee details such as, Age, Name, 
//Address and Salary by using nested structure. 
#include <stdio.h>

struct Address {
    char street[100];
    char city[50];
    char state[50];
    char country[50];
};

struct Employee {
    char name[50];
    int age;
    struct Address address;
    double salary;
};

void printEmployee(struct Employee employee) {
    printf("Name: %s\n", employee.name);
    printf("Age: %d\n", employee.age);
    printf("Address: %s, %s, %s, %s\n", employee.address.street, employee.address.city, employee.address.state, employee.address.country);
    printf("Salary: %.2f\n", employee.salary);
}

int main() {
    struct Employee employee = {
        .name = "John Doe",
        .age = 30,
        .address = {
            .street = "123 Main St",
            .city = "Anytown",
            .state = "Anystate",
            .country = "AnyCountry"
        },
        .salary = 50000.00
    };

    // Print the employee details
    printEmployee(employee);

    return 0;
}
