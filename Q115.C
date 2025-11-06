#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";
    int freq[26] = {0};

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
