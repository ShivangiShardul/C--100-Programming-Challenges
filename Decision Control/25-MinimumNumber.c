#include<stdio.h>

int main(){
  int num,num1;

  printf("Enter the First Number :");
  scanf("%d",&num);

  printf("Enter the Second Number :");
  scanf("%d",&num1);

  num>num1 ? printf("%d is minimum number",num1) : printf("%d is minimum number",num);

  // int min = num < num1 ? num : num1;
  // printf("%d is minimum number",min);

}