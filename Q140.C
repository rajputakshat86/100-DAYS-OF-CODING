 #include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    char input[20];
    struct Person p;

    scanf("%s", input);   // Input like: MALE or FEMALE

    if (strcmp(input, "MALE") == 0) {
        p.gender = MALE;
    }
    else if (strcmp(input, "FEMALE") == 0) {
        p.gender = FEMALE;
    }
    else {
        printf("Invalid Input\n");
        return 0;
    }

    if (p.gender == MALE)
        printf("Male\n");
    else
        printf("Female\n");

    return 0;
}
