#include <stdio.h>
int main()
{
  int ROW1 = 3, COL1 = 2, ROW2 = 2, COL2 = 3;
  int matrix1[3][2] = {
      {1, 2},
      {3, 4},
      {5, 6}};
  int matrix2[2][3] = {
      {7, 8, 9},
      {10, 11, 12}};
  int result[ROW1][COL2];
  int sum;
  for (int i = 0; i < ROW1; i++)
  {
    for (int j = 0; j < COL2; j++)
    {
      sum = 0;
      for (int k = 0; k < COL1; k++)
      {
        sum += matrix1[i][k] * matrix2[k][j];
      }
      result[i][j] = sum;
    }
  }
  printf("The product of the matrices is:\n");
  for (int i = 0; i < ROW1; i++)
  {
    for (int j = 0; j < COL2; j++)
    {
      printf("%d\t", result[i][j]);
    }
    printf("\n");
  }
  return 0;
}