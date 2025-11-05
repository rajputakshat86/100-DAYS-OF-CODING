//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
int main() 
{
  char str[200], temp;
  int i, j, start = 0, length = 0;
  printf("Enter a sentence: ");
  gets(str);
  for(i=0; str[i] != '\0'; i++)
  { length++; }
  for(i=0; i <= length; i++) 
  { if(str[i] == ' ' || str[i] == '\0') 
  { j = i-1;
    while(start < j) 
  { temp = str[start];
    str[start] = str[j];
    str[j] = temp;
    start++;
    j--;
  }
  start = i+1;
  }
  }
  printf("%s ", str);
  return 0;
}
