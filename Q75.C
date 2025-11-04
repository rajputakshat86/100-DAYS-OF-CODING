//Q75: WAP to add two matrices.
#include<stdio.h>
int main() 
{ 
  int n, m, i, j, arr1[100][100], arr2[100][100], add_arr[100][100];
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);

  printf("Enter the elements of the array.\n");
  for(i=1; i<=n; i++) 
  { for(j=1; j<=m; j++) 
  { printf("Enter element at [%d][%d](Matrix 1): ", i, j);
    scanf("%d", &arr1[i-1][j-1]); }
  }
  printf("Enter the elements of the array.\n");
  for(i=1; i<=n; i++) 
  { for(j=1; j<=m; j++) 
  { printf("Enter element at [%d][%d](Matrix 2): ", i, j);
    scanf("%d", &arr2[i-1][j-1]); }
  }
  for(i=0; i<n; i++) 
  { for(j=0; j<m; j++) 
  { add_arr[i][j] = arr1[i][j] + arr2[i][j]; }
  }
  printf("The added matrix is: \n");
  for(i=0; i<n; i++) 
  { for(j=0; j<m; j++)
  { printf("%d ", add_arr[i][j]); }
    printf("\n"); }        
    
  return 0;
}