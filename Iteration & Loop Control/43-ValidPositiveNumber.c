#include<stdio.h>

int main(){
  int num;

  printf("Welcome to Positive Number Checker\n");

  do{
    printf("Please, Enter the number : ");
    scanf("%d",&num);
  } while (num <= 0);

  printf("You have successfully enter the positive number");

  return 0;
}