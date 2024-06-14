#include<stdio.h>

int main(){
  int num;

  printf("Welcome to Summing Odd Numbers:\n ");
  printf("Enter the number : ");
  scanf("%d",&num);

  int sum=0;

  //method 1

  // int i=1;
  // while (i<=num)
  // {
  //   sum +=i;
  //   i+=2;
  // }

  //method 2
  for(int i=1;i<=num;i = i + 2){
    sum +=i;
  }
  
  printf("The sum of all odd numbers between 1 to %d is %d",num,sum);


  return 0;
}