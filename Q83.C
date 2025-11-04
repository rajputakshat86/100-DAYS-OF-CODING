//Q83: Count vowels and consonants in a string.
#include<stdio.h>
int main()
{
  char str[100], vowels[] = "aeiouAEIOU", null[] = "\0";
  int i, j, vowel, consonant;
  printf("Enter a word: ");
  gets(str);
  vowel = 0;
  consonant = 0;
  for(i=0; str[i] != '\0'; i++)
  { if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
  { for(j=0; vowels[j] != '\0'; j++)
  { if(str[i] == vowels[j] && vowels[j] != '\0')
    { vowel++;
      break; }
  }
    if(vowels[j] == '\0')
    { consonant++; }
  }
  }
  printf("Total number of vowels are %d\n", vowel);
  printf("Total number of consonants are %d\n", consonant);
  return 0;
}
