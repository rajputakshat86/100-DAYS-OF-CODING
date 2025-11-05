// Q93: Check if two strings are anagrams of each other.
#include<stdio.h>
int main()
{
    int i, j, length1=0, length2=0, temp=0;
    char str1[100], str2[100];
    printf("Enter a word: ");
    gets(str1);
    printf("Enter a word: ");
    gets(str2);
    for(i=0; str1[i] != '\0'; i++)
    { length1++; }
    for(j=0; str2[j] != '\0'; j++)
    { length2++; }
    if(length1 != length2)
    { printf("Not Anagrams"); }
    else
    { for(i=0; str1[i] != '\0'; i++)
    { for(j=0; str2[j] != '\0'; j++)
      if(str1[i] == str2[j])
      { temp++;
        break; }
    }
    if(temp == length1)
    { printf("Anagrams"); }
    else
    { printf("Not Anagrams"); }
    }
    return 0;
}