#include<stdio.h>

int main(){
  int num1,num2;

  printf("Welcome to Greatest Common Divisior Calculator\n");

  printf("Enter the first number : ");
  scanf("%d",&num1);

  printf("Now , Enter the second number : ");
  scanf("%d",&num2);

  int min = num1 > num2 ? num1 : num2;
  
  for(int i = min; i >= 1; i--){
    if(num1 % i == 0 && num2 % i == 0){
      printf("The GCD of %d and %d is %d",num1,num2,i);
      break;
    }
  }

  return 0;
}