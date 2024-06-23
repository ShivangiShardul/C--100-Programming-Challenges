#include<stdio.h>

int sum(int arr[][3], int rows, int cols);

int main(){
  printf("\nWelcome to sum and average of 2d array");
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 4, 1}};

  int add = sum(arr, 3, 3);
  float avg = add / 9.0;
  printf("\nThe sum is %d and average is %.2f of 2d array", add, avg);

  return 0;
}

int sum(int arr[][3], int rows, int cols){
  int sum = 0;
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      sum += arr[i][j];
    }
  }
  return sum;
}
