#include<stdio.h>

int main(){
  int num;

  printf("Enter the Number to check :");
  scanf("%d",&num);
  
  //solution 1

  // if((num % 2)==0){
  //   printf("%d is Even number",num);
  // }
  // else{
  //   printf("%d is Odd number",num);
  // }
  
  //solution 2 - ternary operator

  (num % 2)==0 ? printf("%d is Even number",num) : printf("%d is Odd number",num);

}