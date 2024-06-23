#include<stdio.h>

void print_array(char arr[], int size);
void copy_arr(char *arr, int size, char *new_arr);

int main()
{
  char arr[9] = {'H', 'i', ' ', 'R', 'o', 'b', 'e', 'r', 't'};
  char new_array[9];

  printf("Welcome to copying array using pointer arithmetic \n\n");
  printf("Original char array:");
  print_array(arr, 9);
  copy_arr(arr, 9, new_array);
  printf("\ncopied char array:");
  print_array(new_array, 9);

  return 0;
}

void copy_arr(char *arr, int size, char *new_arr){
  for (int i = 0; i < size; i++){
    *new_arr = *arr;
    new_arr++;
    arr++;

    // *(new_arr + i) = *(arr + i);
  }
}

void print_array(char arr[], int size){
  for (int i = 0; i < size; i++){
    printf("%c", arr[i]);
  }
}