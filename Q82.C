//Q82: Print each character of a string on a new line.
#include<stdio.h>
int main()
{
  int i;
  char str[100];
  printf("Enter a word: ");
  gets(str);
  for(i=0; str[i] != '\0'; i++)
  { printf("%c", str[i]);
    printf("\n"); }
  return 0;
}
