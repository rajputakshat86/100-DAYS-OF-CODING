//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1024];
    if (scanf("%1023s", s) != 1) return 0;

    int freq[10] = {0};
    for (size_t i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            freq[s[i] - '0']++;
        }
       
    }

    int maxDigit = 0, maxCount = freq[0];
    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);
    return 0;
}

