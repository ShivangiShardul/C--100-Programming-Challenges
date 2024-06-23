#include <stdio.h>

const int SIZE = 4;
// const int SIZE = 3;
void print_diagonal_sum(int arr[][SIZE]);

int main(){
  printf("Welcome to sum of diagonal elements\n");
  int arr1[3][3] = {{1, 2, 3}, {7, 8, 9}, {5, 8, 2}};
  int arr2[4][4] = {{4, 3, 6, 2}, {-1, -4, 0, 8}, {8, 9, 5, 6}, {1, 3, 7, 2}};

  // print_diagonal_sum(arr1);
  print_diagonal_sum(arr2);
  return 0;
}

void print_diagonal_sum(int arr[][SIZE]){
  int left_ds = 0;
  int right_ds = 0;

  for (int i = 0; i < SIZE; i++){
    left_ds += arr[i][i];
    right_ds += arr[i][SIZE - i - 1];
  }

  printf("Sum of left diagonal is %d\n",left_ds);
  printf("Sum of right diagonal is %d\n",right_ds);

  int sum_diagonal = left_ds + right_ds;
  if (SIZE % 2 == 1){
    int index = SIZE / 2;
    sum_diagonal -= arr[index][index];
  }
    printf("Sum of Diagonals of array is %d\n", sum_diagonal);
}