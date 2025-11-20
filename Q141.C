#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

int main()
{
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}
