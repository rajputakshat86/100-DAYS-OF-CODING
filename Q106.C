#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int next;

    for (int i = 0; i < n; i++) {
        next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d", next);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
