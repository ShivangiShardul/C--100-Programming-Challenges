#include<stdio.h>

int main(){
  float num1,num2;
  char opr;

  printf("Welcome to Calculator\n");

  printf("Enter the First Number :");
  scanf("%f",&num1);

  printf("Enter the Second Number :");
  scanf("%f",&num2);

  printf("Finally,Enter the Operation(+, -, *, /) :");
  scanf("%s",&opr);

  float result;
  int invalid=0;
  switch (opr)
  {
  case '+': result = num1 + num2;
    break;

  case '-': result = num1 - num2;
    break;

  case '*': result = num1 * num2;
    break;

  case '/': result = num1 / num2;
    break;

  default: invalid==1;
  break;
  }

 if(invalid==0){
  printf("The result is %.2f",result);}
  else{
    printf("Please,enter the valid operator");
  }

  return 0;
}