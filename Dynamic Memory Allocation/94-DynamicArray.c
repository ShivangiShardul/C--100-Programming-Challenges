#include<stdio.h>
#include<stdlib.h>

int main(){
  int size;
  printf("Welcome to our world\n");
  printf("Please enter the number of elements:");
  scanf("%d", &size);

  float *arr = (float *)malloc(size * sizeof(float));
  if(arr==NULL){
    printf("Memory was not allocated");
    return 1;
  }

  for (int i = 0; i < size; i++){
    printf("Now enter element no %d: ", i + 1);
    scanf("%f", &arr[i]);
  }

  printf("\n Here are your elemets:");
  for (int i = 0; i < size; i++){
    printf(" %.2f", arr[i]);
  }

  free(arr);
  arr = NULL;

  return 0;
}