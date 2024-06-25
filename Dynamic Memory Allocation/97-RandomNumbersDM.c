#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  printf("Welcome to worldd of dynamic randoms");
  int *arr = (int *)calloc(10, sizeof(int));
  if(arr == NULL)
  {
    printf("Memory Error !!!");
    return 1;
  }

  srand(time(NULL));  //seeding random generations

  for (int i = 0; i < 10; i++){
    arr[i] = rand() % 100;  //0-99
  }

  printf("\n here are your random numbers ");
  for (int i = 0; i < 10; i++){
    printf(" %d", arr[i]);
  }

  int *shrink = (int *)realloc(arr, 5 * sizeof(int));
  if(shrink == NULL)
  {
    printf("Memory Error !!!");
    free(arr);
    arr = NULL;
    return 1;
  }

  arr = shrink;

  printf("\n here are your random numbers ");
  for (int i = 0; i < 5; i++){
    printf(" %d", arr[i]);
  }

  free(arr);
  arr = NULL;

  return 0;
}