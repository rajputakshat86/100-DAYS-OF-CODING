//Q81: Count characters in a string without using built-in length functions.
#include<stdio.h>
int main()
{
    int i, x;
    char string[100];
    printf("Enter a word: ");
    gets(string);
    x=0;
    for(i=0; string[i] != '\0'; i++)
    {x++; }
    printf("%d", x);
    return 0; 
}