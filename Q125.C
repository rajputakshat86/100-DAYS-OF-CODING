#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char text[200];

    
    printf("Enter filename: ");
    scanf("%s", filename);

   
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    
    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    
    
    fputs(text, file);

    printf("File updated successfully with appended text.\n");

    fclose(file);
    return 0;
}
