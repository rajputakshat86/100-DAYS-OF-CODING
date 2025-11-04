//Q77: WAP to check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() 
{ 
 int n, m, i, j, distinct, arr[100][100], diagonal[100];
 printf("Enter the number of rows: ");
 scanf("%d", &n);
 printf("Enter the number of columns: ");
 scanf("%d", &m);
    
 if(n != m)
 printf("False");
 else
 { printf("Enter the elements of the array.\n");
   for(i=1; i<=n; i++) 
   { for(j=1; j<=m; j++) 
   { printf("Enter element at [%d][%d]: ", i, j);
     scanf("%d", &arr[i-1][j-1]); }
   }
   for(i=0; i<n; i++)
   { diagonal[i] = arr[i][i];}
   distinct = 1;
   for(i=0; i<n; i++) 
   { for(j=i+1; j<m; j++)
   { if(arr[i][i] == arr[j][j])
   { distinct = 0;
     break;}
   } 
   if(!distinct) break;
   }
  }
   printf("%s\n", distinct ? "True" : "False");
   return 0;
}