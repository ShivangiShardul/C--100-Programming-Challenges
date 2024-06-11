#include<stdio.h>

int main(){
  int num1,num2,operator;

  printf("Enter the first number:");
  scanf("%d",&num1);

  printf("Enter the second number:");
  scanf("%d",&num2);

  // Solution 1

  printf("\n%d + %d = %d",num1,num2,(num1+num2));
  printf("\n%d - %d = %d",num1,num2,(num1-num2));
  printf("\n%d * %d = %d",num1,num2,(num1*num2));
  printf("\n%d / %d = %d",num1,num2,(num1/num2));
  printf("\n%d modulo %d = %d",num1,num2,(num1%num2));

  // Solution 2

  printf("Enter the operator(1 = +,2 = -,3 = *,4 = /,5 = /%): ");
  scanf("%d",&operator);

  switch (operator)
  {
  case 1: printf("Addition of two numbers is %d",num1+num2);
    // int add = num1+num2;
    // printf("Addition of two numbers is %d",add);
    break;

  case 2: printf("Subtraction of two numbers is %d",num1-num2);
    break;

  case 3: printf("Multiplication of two numbers is %d",num1*num2);
    break;

  case 4: printf("Division of two numbers is %d",num1/num2);
    break;

  case 5: printf("Modulas of two numbers is %d",num1%num2);
    break;
  
  default: printf("Enter the valid operator");
    break;
  }

  return 0;
}