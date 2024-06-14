#include<stdio.h>

int main(){
  int num;

  printf("Sum of Digits of Given Integer\n");
  printf("Enter the number : ");
  scanf("%d",&num);

  int sum=0;
  int copy = num;
  while (num>0)
  {
    sum += num % 10;
    num /= 10;
  }
  
  printf("The sum of digits of %d is %d",copy,sum);

  return  0;
}