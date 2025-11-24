

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopper(struct Student s[], int n) {
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

    struct Student s[n];

    
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll and marks of student %d: ", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

   
    struct Student topper = getTopper(s, n);

    
    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
