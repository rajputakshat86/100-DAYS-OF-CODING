//Q73: WAP to find the sum of each row of a matrix and store it in an array.
#include<stdio.h>
int main()
{
    int i, j, n, m, sum, sum_arr[50], arr[100][100];
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    sum = 0;
    printf("Enter elements in the matrix.\n");
    for(i=1; i<=n; i++)
    { for(j=1; j<=m; j++)
    { printf("Enter element at arr[%d][%d]: ", i, j); 
      scanf("%d", &arr[i-1][j-1]); }
    }
    for(i=0; i<n; i++)
    { for(j=0; j<m; j++)
    {  sum = sum + arr[i][j]; 
       sum_arr[i] = sum; }
       sum = 0;
    }
    printf("The array is: ");
    for(i=0; i<n; i++)
    { printf("%d ", sum_arr[i]); }
    return 0;
}
