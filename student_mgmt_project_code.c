#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};


void addStudents(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}


void displayStudents(struct Student s[], int n) {
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
}


struct Student findTopper(struct Student s[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return s[maxIndex];
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    addStudents(students, n);
    displayStudents(students, n);

    struct Student topper = findTopper(students, n);

    printf("\n--- Topper Details ---\n");
    printf("Name: %s | Roll: %d | Marks: %.2f\n", topper.name, topper.roll, topper.marks);

    return 0;
}
