#include <stdio.h>

int findMajority(int nums[], int n) {
    int count = 0, candidate = -1;

    
    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = nums[i];
        count += (nums[i] == candidate) ? 1 : -1;
    }

    
    count = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] == candidate)
            count++;

    if (count > n / 2)
        return candidate;
    else
        return -1;
}

int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    int majority = findMajority(nums, n);
    printf("%d\n", majority);

    return 0;
}
