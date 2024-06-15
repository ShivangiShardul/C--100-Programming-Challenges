#include<stdio.h>

int main(){
  int num;

  printf("Check Whether Number is Prime or not:\n ");
  printf("Enter the number : ");
  scanf("%d",&num);

  int i = 2;
  while(i < num){
    if(num % i == 0){
      printf("%d is not a prime number", num);
      return 0;
    }
    i++;
  }

  printf("%d is prime number",num);

  return 0;
}