#include<stdio.h>

int main(){
  int arr[10];

  printf("Welcome Min and Max finder from array\n");

  for (int i = 0; i < 10;i++){
    printf("Please, Enter the %d th element : ", i);
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  int min = arr[0];

  for (int i = 1; i < 10;i++){
    if(max < arr[i]){
      max = arr[i];
    }
    if(min > arr[i]){
      min = arr[i];
    }
  }

  printf("\n\nThe minimum number is %d and maximum number is %d of array", min, max);

  return 0;
}