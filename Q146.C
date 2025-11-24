

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date doj;   
};

int main() {

    struct Employee e;

    printf("Enter name, id and joining date (dd mm yyyy): ");
    scanf("%s %d %d %d %d", 
          e.name, &e.id, &e.doj.day, &e.doj.month, &e.doj.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.id, e.doj.day, e.doj.month, e.doj.year);

    return 0;
}
