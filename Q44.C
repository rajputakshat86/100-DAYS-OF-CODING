//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    printf("Enter number of terms (n): ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += (float)(2*i - 1) / (2*i);
    }
    printf("Sum of the series up to %d terms = %.4f\n", n, sum);
    return 0;
}
