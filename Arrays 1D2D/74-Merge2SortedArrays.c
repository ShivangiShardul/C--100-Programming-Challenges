#include<stdio.h>

void print_array(int arr[], int size);
int merge_sorted_array(int arr1[], int size1,
                       int arr2[], int size2,
                       int arr3[], int size3);

int main(){
  int arr1[7] = {1, 3, 5, 7, 9, 11, 13};
  int arr2[5] = {2, 4, 6, 8, 10};
  int arr3[12];

  printf("Welcome to merging to 2 sorted arrays \n\n");
  printf("Here is the merged array");
  merge_sorted_array(arr1, 7, arr2, 5, arr3, 12);
  print_array(arr3, 12);

  int arr4[6] = {4, 12, 34, 56, 67, 99};
  int arr5[6] = {-50, -25, 0, 10, 40, 50};
  int arr6[12];

  printf("\nWelcome to merging to 2 sorted arrays \n\n");
  printf("Here is the merged array");
  merge_sorted_array(arr4, 6, arr5, 6, arr6, 12);
  print_array(arr6, 12);

  return 0;
}

void print_array(int arr[], int size){
  for (int i = 0; i < size; i++){
    printf(" %d", arr[i]);
  }
}

int merge_sorted_array(int arr1[], int size1,
                       int arr2[], int size2,
                       int arr3[], int size3){
  int i = 0, j = 0, k = 0;

  while(k < size3){

    if(j == size2 || ( i < size1) && arr1[i] < arr2[j]){
      arr3[k] = arr1[i++];
    }else{
      arr3[k] = arr2[j++];}
    

    // if(j == size2){
    //   arr3[k] = arr1[i++];
    // }else if(i == size1){
    //   arr3[k] = arr2[j++];
    // }else if(arr1[i] < arr2[j]){
    //   arr3[k] = arr1[i++];
    // }else{
    //   arr3[k] = arr2[j++];
    // }
    k++;
  }
}
