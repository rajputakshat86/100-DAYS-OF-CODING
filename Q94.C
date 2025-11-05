// Q94: Find the longest word in a sentence.
#include<stdio.h>
int main()
{
  int i, j, length = 0;
  char str[100];
  printf("Enter a string: ");
  gets(str);
  j = 0;
  for(i=0; str[i] != '\0'; i++)
  { if(str[i] == ' ')
    { break; }
    else
    { length++; 
      if(length > j)
    { j = length; }
    }
  }
  printf("%d", j);
  return 0;
}