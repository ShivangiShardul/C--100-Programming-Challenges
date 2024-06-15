#include<stdio.h>

int main(){
  int num;

  printf("Welcome to Multiplication Table Calculator:\n ");
  printf("Enter the number for multiplication table: ");
  scanf("%d",&num);

  int i;

  for(i=1;i<=10;i++)
  {
    printf("%d X %d = %d",num,i,num*i);
    printf("\n");
  }

  return 0;
}