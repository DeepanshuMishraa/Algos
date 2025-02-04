#include <stdio.h>

// matrix multiplication -> complexity O(n^3)

void matrix_multiply(int n, int arr1[n][n], int arr2[n][n])
{
  int result[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      result[i][j] = 0;
      for (int k = 0; k < n; k++)
      {
        result[i][j] += arr1[i][k] * arr2[k][j];
      }
    }
  }

  printf("Resultant matrix is: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
}

// matrix addition -> complexity O(n^2)

void addMatrix(int n, int arr[n][n], int arr2[n][n])
{

  int result[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      result[i][j] = arr[i][j] + arr2[i][j];
    }
  }

  printf("Resultant matrix is: \n");

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
}
