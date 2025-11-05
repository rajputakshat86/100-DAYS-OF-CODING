//Q100: Print all sub-strings of a string.
#include<stdio.h>
int main()
{
    int i;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i] != '\0'; i++)
    { if(str[i] == ' ')
    { printf("\n");
    }
      else
    { printf("%c", str[i]); }
    }
    return 0;
}