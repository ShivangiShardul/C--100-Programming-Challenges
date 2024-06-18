#include<stdio.h>

int main(){
  const float MILE_PER_KM = 0.621371;
  long kilometers;

  printf("welcome to distance convertor:\n");
  printf("Please,Enter the kilometers:");
  scanf("%ld", &kilometers);

  long miles = kilometers * MILE_PER_KM;
  printf("The no of miles are %ld", miles);

  return 0;
}