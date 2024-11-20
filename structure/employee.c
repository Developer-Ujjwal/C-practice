
#include<stdio.h>
struct a{
    char name[100];
    int id;
    int salary;
}e[3];
int main()
{
 printf("Enter the details of three employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", e[i].name);
        printf("Enter the id of employee %d: ", i + 1);
        scanf("%d", &e[i].id);
        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%d", &e[i].salary);
        printf("\n");
    }
     printf("The employee information is as follows:\n\n");
    printf("Name\t\tID\t\tSalary\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\t\t%d\t\t%d\n", e[i].name, e[i].id, e[i].salary);
    }


return 0;
}