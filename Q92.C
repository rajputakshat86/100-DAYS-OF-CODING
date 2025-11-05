//Q92: Find the first repeating lowercase alphabet in a string.
#include<stdio.h>
int main()
{
  int i, j, k, repeat = 0;
  char str[100];
  printf("Enter a word: ");
  gets(str);
  printf("The first repeating lowercase alphabet is ");
  for(i=0; str[i] != '\0'; i++)
  { if(str[i] >= 'a' && str[i] <= 'z')
    { for(k=i+1; str[k] != '\0'; k++)
    { if(str[k] == str[i])
      { printf("%c", str[k]);
        return 0; }
    } 
    } 
  }
  return 0;
}