#include<stdio.h>

long long fact(int);

int main(){
  int num;

  printf("Welcome to factorial world!\n");
  printf("Enter the num :");
  scanf("%d", &num);

  long long result = fact(num);
  printf("The factorial of %d is %lld", num, result);

  return 0;
}

long long fact(int num){
  if(num <= 1){
    return 1;
  }
  else{
    return num * fact(num - 1);
  }
}