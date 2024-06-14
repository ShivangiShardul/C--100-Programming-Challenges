#include<stdio.h>

int main(){
  int num;

  printf("Enter the Number to check :");
  scanf("%d",&num);

  if(num>0){
    printf("%d is Positive number",num);
    }
  else if (num<0){
    printf("%d is Negative number",num);
    }
  else{
    printf("The number is Zero");
    }
  

  return 0;
}