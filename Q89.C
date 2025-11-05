//Q89: Count frequency of a given character in a string.
#include<stdio.h>
int main()
{
    int i, freq;
    char str[100], j;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the character whose frequency you want to find: ");
    scanf("%c", &j);
    for(i=0; str[i] != '\0'; i++)
    { if(str[i] == j)
      { freq++; }
    }
    printf("The frequency of the number is: %d", freq);
    return 0;
}

