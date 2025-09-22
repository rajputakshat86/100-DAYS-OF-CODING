//Q52: Write a program to print the following pattern:

/*

*
*
*

*
*
*
*
*

*
*
*

*/
#include <stdio.h>
int main() {
    int i, j;
    int stars[] = {1, 3, 5, 3, 1};  
    int n = sizeof(stars)/sizeof(stars[0]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < stars[i]; j++) {
            printf("*\n");
        }
        if (i != n-1)  
            printf("\n");
    }
    return 0;
}



