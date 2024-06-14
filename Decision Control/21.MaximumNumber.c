#include<stdio.h>

int main(){
  int num,num1,num2;

  printf("Enter the First Number :");
  scanf("%d",&num);

  printf("Enter the Second Number :");
  scanf("%d",&num1);

  printf("Enter the Third Number :");
  scanf("%d",&num2);

  if(num>num1 && num>num2){
    printf("%d is Maximum number",num);
  }
  else if (num1>num2){
    printf("%d is Maximum number",num1);
  }
  else {
    printf("%d is Maximum number",num2);
  }

}