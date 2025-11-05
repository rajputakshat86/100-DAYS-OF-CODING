//Q87: Count spaces, digits, and special characters in a string.
#include<stdio.h>
int main()
{
    int i, uppercase = 0, lowercase = 0, special = 0, space = 0, digit = 0;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i] != '\0'; i++)
    { if(str[i] >= 'a' && str[i] <= 'z')
      { lowercase++; }
      else if(str[i] >= 'A' && str[i] <= 'Z')
      { uppercase++; }
      else if(str[i] == ' ')
      { space++; }
      else if(str[i] >= '0' && str[i] <= '9')
      { digit++; }
      else
      { special++; }
    }
    printf("Total Lowercase charcaters: %d ; Uppercase characters: %d.\n", lowercase, uppercase);
    printf("Total spaces: %d ; special characters: %d ; Digits: %d", space, special, digit);
    return 0;
}