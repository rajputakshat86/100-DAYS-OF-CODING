//Q97: Print the initials of a name.
#include<stdio.h>
int main()
{
    int i;
    char str[100];
    printf("Enter a name: ");
    gets(str);
    printf("%c. ", str[0]);
    for(i=0; str[i] != '\0'; i++)
    { if(str[i] == ' ')
    { printf("%c.", str[i+1]); }
    }
    return 0;
}