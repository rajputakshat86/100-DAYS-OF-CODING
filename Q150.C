/*
Q150: Use pointer to struct to modify and display data using -> operator.

Sample Test Case:
Input:
Student pointer modifying values: John 106 91

Output:
Modified Data: Name: John | Roll: 106 | Marks: 91
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;  // Pointer to structure

    // Input values using pointer
    printf("Enter student details (Name Roll Marks): ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    // Display modified data using -> operator
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
