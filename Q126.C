#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char line[200];

   
    printf("Enter filename: ");
    scanf("%s", filename);

    
    file = fopen(filename, "r");

    
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n\n");

    
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
