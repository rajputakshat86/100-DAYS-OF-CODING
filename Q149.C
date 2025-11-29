/*
Q149: Use malloc() to allocate structure memory dynamically and print details.

Sample Test Case:
Input:
Student allocated dynamically with details: Tina 105 88

Output:
Name: Tina | Roll: 105 | Marks: 88
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    // Dynamically allocate memory for one Student structure
    struct Student *s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Input details
    printf("Enter student details (Name Roll Marks): ");
    scanf("%s %d %d", s->name, &s->roll, &s->marks);

    // Output the details
    printf("Name: %s | Roll: %d | Marks: %d", s->name, s->roll, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
