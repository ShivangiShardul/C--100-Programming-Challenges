#include<stdio.h>

int search_element(int arr[][3], int rows, int cols, int element);

int main(){
  printf("\nWelcome to Searching of elements in 2d array\n");
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 4, 1}};

  int occ = search_element(arr,3,3,1);
  printf("\nThe 1 has %d occ in array", occ);

  occ = search_element(arr,3,3,4);
  printf("\nThe 4 has %d occ in array", occ);

  occ = search_element(arr,3,3,6);
  printf("\nThe 6 has %d occ in array", occ);

  occ = search_element(arr,3,3,9);
  printf("\nThe 9 has %d occ in array", occ);

  return 0;
}

int search_element(int arr[][3], int rows, int cols, int element){
  int occ = 0;
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols;j++){
      if(arr[i][j] == element){
        occ++;
      }
    }
  }
  return occ;
}