// Q85: Reverse a string.
#include<stdio.h>
int main()
{
  int i, j, k, temp;
  char str[100];
  printf("Enter a string: ");
  gets(str);
  temp = 0;
  for(i=0; str[i] != '\0'; i++)
  { temp++; }
  for(i=0; i<temp/2; i++)
  { k = str[i];
    str[i] = str[temp-1-i];
    str[temp-1-i] = k;  
  }
  printf("%s", str);
  return 0;
}