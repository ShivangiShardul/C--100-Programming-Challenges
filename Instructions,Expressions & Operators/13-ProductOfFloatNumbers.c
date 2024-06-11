#include<stdio.h>

int main(){
  float num1,num2;

  printf("Enter the first number:");
  scanf("%f",&num1);

  printf("\nEnter the second number:");
  scanf("%f",&num2);

  printf("\n%.2f * %.2f = %.2f",num1,num2,(num1*num2));
  printf("\nProduct of two floating numbers is %.2f",(num1*num2));


  return 0;
}