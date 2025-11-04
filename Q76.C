//Q76: WAP to check if a matrix is symmetric.
#include<stdio.h>
int main() 
{ 
  int n, m, i, j, symmetric, arr1[100][100], arr[100][100];
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
    scanf("%d", &arr1[i-1][j-1]); }
    }
    for(i=0; i<n; i++) 
    { for(j=0; j<m; j++) 
    { arr[j][i] = arr1[i][j]; }
    }
    symmetric = 0;
    for(i=0; i<n; i++)
    { for(j=0; j<m; j++)
    if(arr[i][j] == arr1[i][j])
    {symmetric++; }
    }
    if(symmetric == n*m)
    printf("True");
    else
    printf("False");
  }
  return 0;
}

