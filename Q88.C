//Q88: Replace spaces with hyphens in a string.
#include<stdio.h>
int main()
{
    int i;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i] != '\0'; i++)
    { if(str[i] == ' ')
      { str[i] = '-'; }
    }
    puts(str);
    return 0;
}
