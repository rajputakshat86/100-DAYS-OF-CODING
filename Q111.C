#include <stdio.h>

int main() {
    int arr[] = {-8, 2, 3, -6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break;
            }
        }
        printf("%d", firstNeg);
        if (i < n - k)
            printf(" ");
    }

    printf("\n");
    return 0;
}
