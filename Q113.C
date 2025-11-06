#include <stdio.h>


void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    sortArray(arr, n);

    printf("%d\n", arr[k - 1]);  
    return 0;
}
