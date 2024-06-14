#include<stdio.h>

int main(){
  int num;

  printf("Enter the Number to check :");
  scanf("%d",&num);

  (num % 2)==0 ? printf("%d is Even number",num) 
               : printf("%d is Odd number",num);

}