#include<stdio.h>

int main(){
  int num1,num2;

  printf("Welcome to Least Common Multiple Calculator\n");

  printf("Enter the first number : ");
  scanf("%d",&num1);

  printf("Now , Enter the second number : ");
  scanf("%d",&num2);

  int min = num1 > num2 ? num1 : num2;
  int max = num1 * num2;
  
  for(int i = min; i<= max; i++){
    if( i % num1 == 0 && i % num2 == 0){
      printf("The LCM of %d and %d is %d",num1,num2,i);
      break;
    }
  }

  return 0;
}