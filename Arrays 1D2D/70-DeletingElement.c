#include<stdio.h>

void delete(int arr[],int size,int new_array[],int *new_size,int element);
void print_array(int arr[], int size);

int main(){
  int arr[] = { 1, 2, 5, 5, 3, 6, 8, 10 };
  printf("Welcome to Deleting elements:\n");

  int new_array[8];
  int *new_size;

  delete (arr, 8, new_array, &new_size, 1);
  printf("\n\nThe array after deleting 1 is:");
  print_array(new_array, new_size);

  delete (arr, 8, new_array, &new_size, 5);
  printf("\n\nThe array after deleting 5 is:");
  print_array(new_array, new_size);

  delete (arr, 8, new_array, &new_size, 11);
  printf("\n\nThe array after deleting 11 is:");
  print_array(new_array, new_size);

  return 0;
}

void print_array(int arr[], int size){
  for (int i = 0; i < size; i++){
    printf(" %d", arr[i]);
  }
}

void delete(int arr[],int size,int new_array[],int *new_size,int element){
  int j = 0;
  for (int i = 0; i < size; i++)
  {
    if(arr[i] != element){
      new_array[j++] = arr[i];
    }
  }
  *new_size = j;
}
