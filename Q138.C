#include <stdio.h>

enum Colors {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char names[3][10] = {"RED", "YELLOW", "GREEN"};

    for (int i = 0; i < 3; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
