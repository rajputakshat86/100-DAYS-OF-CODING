//Q72: WAP to find the sum of all elements in a matrix
#include <stdio.h>
int main() 
{ 
  int n, m, i, j, sum, arr[100][100];
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);
    
  printf("Enter the elements of the array.\n");
  for(i=1; i<=n; i++) 
  { for(j=1; j<=m; j++) 
  { printf("Enter element at [%d][%d]: ", i, j);
    scanf("%d", &arr[i-1][j-1]); }
  }
  sum = 0;
  for(i=0; i<n; i++) 
  { for(j=0; j<m; j++) 
  { sum = sum + arr[i][j]; }
  }
  printf("The sum is %d", sum);
  return 0;
}