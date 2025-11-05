// Q91: Remove all vowels from a string.
#include<stdio.h>
int main()
{
  int i, j, k;
  char str[100], vowel[]="aeiouAEIOU";
  printf("Enter a word: ");
  gets(str);
  printf("The word without vowels will be ");
  for(i=0; str[i] != '\0'; i++)
  { k = 0;
    for(j=0; vowel[j] != '\0'; j++)
  {  if(str[i] == vowel[j])
    { k = 1; } 
  }
  if(k != 1)
  { printf("%c", str[i]); }
  }
  return 0;
}
