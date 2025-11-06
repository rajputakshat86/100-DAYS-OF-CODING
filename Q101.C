#include <stdio.h>
int main()
 {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target element: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            if(first == -1) first = i;
            last = i;
        }
    }

    if(first == -1)
        printf("-1, -1");
    else
        printf("First occurrence index: %d\nLast occurrence index: %d", first, last);

    return 0;
}
