//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main() 
{
    char name[100];
    int i, length;
    printf("Enter the full name: ");
    gets(name);
    length = strlen(name);
    printf("%c.", name[0]);
    for(i=1; i<length; i++) 
    { if(name[i] == ' ' && i != length-1) 
    { if(name[i + 1] != ' ') 
      { if(strchr(name + i + 1, ' ') != NULL)
      { printf("%c.", name[i + 1]); }
       else 
       { printf(" %s", name + i + 1);
         break; }
      }
    }
    }
    return 0;
}