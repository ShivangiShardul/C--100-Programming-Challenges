#include<stdio.h>

int main(){
  int num;

  printf("Welcome to Multiplication Table Calculator: ");
  printf("Enter the number for multiplication table: ");
  scanf("%d",&num);
  
  int i = 1;

  while (i <= 10)
  {
    printf("%d X %d = %d\n",num,i,num*i);
    i++;
  }
  

  // for(i=1;i<=10;i++){
  //   printf("%d X %d = %d",num,i,num*i);
  // }

  return 0;
}