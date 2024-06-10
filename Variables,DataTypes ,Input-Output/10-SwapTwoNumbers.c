#include <stdio.h>

int main(){
  int num1,num2,temp;

  printf("Enter your first number : ");
  scanf("%d",&num1);

  printf("Enter your second number : ");
  scanf("%d",&num2);

  printf("The numbers you have enter are %d and %d\n",num1,num2);

  temp = num1;
  num1 = num2;
  num2 = temp;

  printf("The swap numbers are %d and %d",num1,num2);

  return 0;
}