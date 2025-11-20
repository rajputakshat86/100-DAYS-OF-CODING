#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student s[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);

        printf("\n");
    }

    printf("Name\tRoll\tMarks\n");
    printf("-----------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
