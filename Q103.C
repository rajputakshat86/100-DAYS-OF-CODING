#include <stdio.h>

int findPivotIndex(int nums[], int n) {
    int totalSum = 0, leftSum = 0;

    for (int i = 0; i < n; i++)
        totalSum += nums[i];

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum)
            return i;   
        leftSum += nums[i];
    }

    return -1;  
}

int main() {
    int nums[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);

    int index = findPivotIndex(nums, n);
    printf("%d\n", index);

    return 0;
}
