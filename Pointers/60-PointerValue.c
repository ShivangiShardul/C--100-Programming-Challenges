#include<stdio.h>

int main(){
  int num = 50;
  int *ptr = &num;

  printf("The value of num is %d\n", num);
  *ptr = 100;

  printf("Welcome to showcasing integer pointers.\n");

  printf("The value of num is %d\n", *ptr);
  printf("The value of num is %d\n", num);
  printf("The value of pointer is %d", ptr);

  return 0;
}