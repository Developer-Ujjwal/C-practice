#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks[5];
    int total;
    float average;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student students[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &students[i].rollno);
        printf("Enter the marks of student %d in 5 subjects: ", i + 1);
        students[i].total = 0;
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
        students[i].average = students[i].total / 5.0;
    }
    printf("The details of the students are:\n");
    printf("Name\tRollNo\tTotal\tAverage\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%d\t%d\t%.2f\n", students[i].name, students[i].rollno, students[i].total, students[i].average);
    }

    return 0;
}
