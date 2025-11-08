#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Cannot open input.txt!\n");
        return 1;
    }

    
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Cannot create output.txt!\n");
        fclose(inputFile);
        return 1;
    }

    
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }

    printf("File converted successfully! Check output.txt\n");

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
