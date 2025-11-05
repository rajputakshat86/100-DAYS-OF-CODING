 #include <stdio.h>

int main() {
    char date[15];
    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);
    printf("%c%c-Apr-%c%c%c%c", date[0], date[1], date[6], date[7], date[8], date[9]);
    return 0;
}
