#include<stdio.h>

int main(){
  int num;

  printf("Welcome to Armstrong Number Checker\n");

  printf("Please, Enter the number : ");
  scanf("%d",&num);

  int sum = 0;
  int copy = num;
  while(copy>0){
    int digit = copy % 10;
    sum += digit * digit * digit;
    copy /= 10;
  }
  
  if (sum == num){
    printf("%d is Armstrong number", num);
  }
  else{
    printf("%d is not a Armstrong number", num);
  }

  return 0;
}