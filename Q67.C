//Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, pos, key;

    // read size
    scanf("%d", &n);

    int arr[n + 1]; // one extra space for insertion

    // read array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // read position and key
    scanf("%d %d", &pos, &key);

    // shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // insert element
    arr[pos - 1] = key;

    // print updated array
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
