//Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[100], temp[200];
    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Enter a rotated string: ");
    scanf("%s", str2);
    if(strlen(str1) != strlen(str2)) 
    { printf("No, not a rotation\n");
      return 0; }
    strcpy(temp, str1);
    strcat(temp, str1);
    if(strstr(temp, str2) != NULL)
    printf("Yes, it is a rotation\n");
    else
    printf("No, it is not a rotation\n");
    return 0;
}
