#include<stdio.h>

int is_sorted(int arr[], int size);

int main(){
  printf("Welcome to checking if array is sorted or not\n");

  int arr1[6] = { 11, 33, 45, 56, 56, 68 }; //increasing
  int arr2[8] = { 55, 23, 20, 20, 5, 1, -10, -15 };  // decreasing
  int arr3[4] = { 46, 34, 67, 90 }; // not sorted

  if(is_sorted(arr1 , 6)){
    printf("first array is sorted\n");
  }
  else{
    printf("first array is not sorted\n");
  }

  if(is_sorted(arr2 , 8)){
    printf("second array is sorted\n");
  }
  else{
    printf("second array is not sorted\n");
  }

  if(is_sorted(arr3 , 4)){
    printf("third array is sorted\n");
  }
  else{
    printf("third array is not sorted\n");
  }

  return 0;
}

int is_sorted(int arr[], int size){
  int increasing = 1;
  int decreasing = 1;

  for (int i = 1; i < size;i++){
    if (arr[i] > arr[i - 1]){
      decreasing = 0;
    }
    else if (arr[i] < arr[i - 1]){
      increasing = 0;
    }
  }
    return increasing || decreasing;
}