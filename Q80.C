//Q80: WAP to multiply two matrices.
#include <stdio.h>
int main() 
{ 
  int n, m, r, s, i, j, k, arr1[100][100], arr2[100][100], product[100][100];
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &s);
  if(n != s && m != r)
  printf("Multiplication not possible.");
  else
  { printf("Enter the elements of the matrix.\n");
    for(i=1; i<=n; i++) 
    { for(j=1; j<=m; j++) 
    { printf("Enter element at [%d][%d](Matrix 1): ", i, j);
      scanf("%d", &arr1[i-1][j-1]); }
    }
    printf("Enter the elements of the matrix.\n");
    for(i=1; i<=r; i++)
    { for(j=1; j<=s; j++)
    { printf("Enter element at [%d][%d](Matrix 2): ", i, j);
      scanf("%d", &arr2[i-1][j-1]); }
    }
     for(i=0; i<n; i++)
    { for(j=0; j<s; j++)
    { product[i][j] = 0;
      for(k=0; k<m; k++)
    { product[i][j] += arr1[i][k] * arr2[k][j]; }
    } }
    printf("The multiplication is: \n");
    for(i=0; i<n; i++)
    { for(j=0; j<s; j++)
    { printf("%d ", product[i][j]); }
    printf("\n"); }
  }
  return 0;
}