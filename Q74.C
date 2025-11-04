//Q74: WAP to find the transpose of a matrix.
#include<stdio.h>
int main() 
{ 
  int n, m, i, j, arr[100][100];
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
  printf("Entered matrix is: \n");
  for(i=0; i<n; i++)
  { for(j=0; j<m; j++)
  { printf("%d ", arr[i][j]); }
    printf("\n"); }
    
  printf("The transpose of the matrix is:\n");
  for(i=0; i<m; i++) 
  { for(j=0; j<n; j++) 
  { printf("-%d ", arr[j][i]); }
    printf("\n"); }

  return 0;
}