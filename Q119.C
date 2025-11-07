#include <stdio.h>

int main() {
    int n, i, num, sum = 0, expected;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    expected = (n - 1) * (n - 2) / 2;  
    printf("Repeated element: %d\n", sum - expected);

    return 0;
}
