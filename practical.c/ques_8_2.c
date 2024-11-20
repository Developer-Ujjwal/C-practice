// Let us assume, teacher is supposed to allot seats based on the student’s names. You are 
//requested to help teacher by creating a C program, for collecting the names of 5 students 
//and sort them in alphabetical order. 
#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50], temp[50];
    printf("Enter names of 5 students: \n");

    for(int i=0; i<5; i++) {
        gets(names[i]);
    }

    // Sorting names alphabetically
    for (int i=0; i<5; i++) {
        for (int j=i+1; j<5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames of students after sorting: \n");
    for (int i=0; i<5; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}