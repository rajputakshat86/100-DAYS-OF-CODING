//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);

    int arr[n + 1]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int i = n - 1;

   
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = key;  
    n++; 

   
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
