#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int answer[n];
    int left[n], right[n];

    
    left[0] = 1;
    for (int i = 1; i < n; i++)
        left[i] = left[i - 1] * nums[i - 1];

   
    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        right[i] = right[i + 1] * nums[i + 1];

    
    for (int i = 0; i < n; i++)
        answer[i] = left[i] * right[i];

 
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) printf(",");
    }
    printf("]\n");

    return 0;
}

