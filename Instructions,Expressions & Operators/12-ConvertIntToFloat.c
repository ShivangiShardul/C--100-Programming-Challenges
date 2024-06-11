#include<stdio.h>

int main(){
  int num;

  printf("Enter the number to convert :");
  scanf("%d",&num);

  float numfloat = num;

  printf("\nOriginal number is %d",num);
  printf("\nConverted number is %f",numfloat);
  printf("\nConverted number is %f",(float) num);

  return 0;
}