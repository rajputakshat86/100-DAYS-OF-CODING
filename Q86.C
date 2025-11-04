// Q86: Check if a string is a palindrome.
#include<stdio.h>
int main()
{
  int i, j, k, length = 0;
  char str[100], copy[100];
  printf("Enter a string: ");
  gets(str);

  for(i=0; str[i] != '\0'; i++)
  { copy[i] = str[i]; }
  for(i=0; str[i] != '\0'; i++)
  { length++; }
    
  for(i=0; i<length/2; i++)
  { j = str[i];
    str[i] = str[length-1-i];
    str[length-1-i] = j; }
  for(i=0; str[i] != '\0'; i++)
  { if(str[i] == copy[i])
    { k++; }
  }
  if(k == length)
  { printf("The string is a palindrome."); }
  else
  { printf("The number is not a palindrome."); }
  return 0;
}