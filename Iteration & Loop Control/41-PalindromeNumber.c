#include<stdio.h>

int main(){
  int num;

  printf("Welcome to Palindrome Checker\n");

  printf("Please, Enter the number : ");
  scanf("%d",&num);

  int reverse = 0;
  int copy = num;
  while (copy > 0)
  {
    reverse = reverse * 10 + (copy % 10);
    copy /= 10;
  }
  
  if(reverse == num){
    printf("%d is the Palindrome number", num);
  }
  else{
    printf("%d is not a Palindrome number", num);
  }

  return 0;
}