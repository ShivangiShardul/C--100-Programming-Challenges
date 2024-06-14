#include<stdio.h>

int main(){
  int num;

  printf("Welcome to World of Factorial:\n ");
  printf("Enter the number : ");
  scanf("%d",&num);

  int fact = 1;
  // int i=1;
  // while (i<=num)
  // {
  //   fact *= i;
  //   i++;
  // }

   //method 2
  for(int i=1;i<=num;i++){
    fact *= i;
  }
  
  printf("The Factorial of %d is %d",num,fact);



  return 0;

}