#include<stdio.h>

int sum(int arr[],int size);

int main(){
  int arr[10];
  printf("Welcome to sum and average of array\n");

  for (int i = 0; i < 10;i++){
    printf("Please,enter the array element %d : ",(i+1));
    scanf("%d", &arr[i]);
  }

  int add = sum(arr, 10);
  float avg = add / 10.0;

  printf("\nSum of array elements is %d and their Average is %.2f",add, avg);

  return 0;
}

int sum(int arr[],int size){
  int add = 0;

  for (int i = 0; i < size;i++){
    add += arr[i];
  }
    return add;
}