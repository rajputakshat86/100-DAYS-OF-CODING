//Q78: WAP to find the sum of main diagonal elements for a square matrix.
#include<stdio.h>
int main() 
{ 
  int n, i, j, sum, arr[100][100], diagonal[100];
  printf("Enter the number of size of the square matrix(n*n): ");
  scanf("%d", &n);

  printf("Enter the elements of the matrix.\n");
  for(i=1; i<=n; i++) 
  { for(j=1; j<=n; j++) 
  { printf("Enter element at [%d][%d]: ", i, j);
    scanf("%d", &arr[i-1][j-1]); }
  }
  for(i=0; i<n; i++)
  { diagonal[i] = arr[i][i]; }
  sum = 0; 
  for(i=0; i<n; i++)
  { sum = sum + diagonal[i]; }
  printf("Sum of the diagonal elements is %d", sum);
  
  return 0;
}