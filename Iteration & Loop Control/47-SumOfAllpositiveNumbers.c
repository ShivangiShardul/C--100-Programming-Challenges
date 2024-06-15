#include<stdio.h>

int main(){
  int num;

  printf("Welcome to Positive Number Adder\n");

  int sum = 0;

  do{
    printf("Please, Enter the number : ");
    scanf("%d",&num);
    if(num < 0) continue;
      sum += num;
    
  } while (num != 0);

  printf("Sum of all the numbers you have enter is %d", sum);

  return 0;
}