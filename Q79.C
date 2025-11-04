//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() 
{ 
  int n, m, k, i, j, arr[100][100];
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);

  printf("Enter the elements of the matrix.\n");
  for(i=1; i<=n; i++) 
  { for(j=1; j<=m; j++) 
  { printf("Enter element at [%d][%d]: ", i, j);
    scanf("%d", &arr[i-1][j-1]); }
  }
  for(k=0; k<n+m-1; k++)
  { for(i=0; i<=k; i++)
  {  j = k - i;
    if(j >= 0 && j < m && i < n)
  { printf("%d ", arr[i][j]);
  }
  } }
  
  return 0;
}
