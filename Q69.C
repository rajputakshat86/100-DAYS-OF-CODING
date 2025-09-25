//Q69: Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = -1000000, second = -1000000;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    printf("%d\n", second);

    return 0;
}
