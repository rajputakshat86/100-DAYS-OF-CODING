
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp, emp_read;
    FILE *fp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    printf("\nEmployee details stored in file successfully.\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(&emp_read, sizeof(emp_read), 1, fp);
    fclose(fp);

    printf("\nEmployee Details Read From File:\n");
    printf("ID      : %d\n", emp_read.id);
    printf("Name    : %s\n", emp_read.name);
    printf("Salary  : %.2f\n", emp_read.salary);

    return 0;
}
