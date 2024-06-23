#include<stdio.h>

int occurrence(int arr[], int size, int element);

int main(){
  int arr[] = {12, 4, 3, 6, 12, 3, 78, 99, 3, 90};

  printf("Welcome to the occurrence finder\n");

  int result = occurrence(arr, 10, 99);
  printf("The number of occurences of 99 is %d\n", result);
  result = occurrence(arr, 10, 12);
  printf("The number of occurences of 12 is %d\n", result);
  result = occurrence(arr, 10, 3);
  printf("The number of occurences of 3 is %d\n", result);
  result = occurrence(arr, 10, 9);
  printf("The number of occurences of 9 is %d", result);

  return 0;
}

int occurrence(int arr[], int size, int element){
  int counter = 0;
  for (int i = 0;i < size ;i++){
    if(arr[i] == element){
      counter++;
    }
  }

    return counter;
}