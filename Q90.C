//Q90: Toggle case of each character in a string.
#include<stdio.h>
int main()
{
    int i;
    char str[100];
    printf("Enter a word: ");
    gets(str);
    for(i=0; str[i] != '\0'; i++)
    { if(str[i] >= 'a' && str[i] <= 'z')
      { str[i] = str[i] - 32;
        printf("%c", str[i]); 
      }
      else
      { str[i] = str[i] + 32;
        printf("%c", str[i]); 
      }
    }
    return 0;
}

