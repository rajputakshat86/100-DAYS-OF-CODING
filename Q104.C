#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;  
    int x = sqrt(totalSum);           

    if (x * x + x == totalSum)         
        printf("%d\n", x);
    else
        printf("-1\n");

    return 0;
}
