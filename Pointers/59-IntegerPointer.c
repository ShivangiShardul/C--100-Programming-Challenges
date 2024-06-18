#include<stdio.h>

int main(){
  int num;
  int *ptr = &num;

  printf("Welcome to showcasing integer pointers.\n");
  printf("Please, enter the value :");
  scanf("%d", ptr);

  printf("The value of num is %d\n", *ptr);
  printf("The value of num is %d\n", num);
  printf("The address of num is %u\n", &num);
  printf("Theaddress of pointer is %u", &ptr);

  return 0;
}