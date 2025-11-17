#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[20];
    enum Status s;

    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0)
        s = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        s = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0)
        s = TIMEOUT;
    else {
        printf("Invalid input\n");
        return 0;
    }

    switch (s) {
        case SUCCESS:
            printf("Operation successful");
            break;
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}
