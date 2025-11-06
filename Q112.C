#include <stdio.h>

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; i++) {
        
        if (currentSum + arr[i] > arr[i])
            currentSum += arr[i];
        else
            currentSum = arr[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d\n", maxSum);
    return 0;
}
