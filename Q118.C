#include <stdio.h>

int main() {
    int n, i, sum = 0, total;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    total = n * (n + 1) / 2;   
    printf("Missing number: %d\n", total - sum);

    return 0;
}
