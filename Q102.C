#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, res = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            res = mid;       
            high = mid - 1;  
        } else {
            low = mid + 1;
        }
    }
    return res;
}

int main() {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    
    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);
    printf("%d\n", index);

    return 0;
}
