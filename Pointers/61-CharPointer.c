#include<stdio.h>

int main(){
  char character;
  char *ptr = &character;

  printf("Welcome to showcasing integer pointers.\n");
  printf("Please, enter the value :");
  scanf("%c",ptr);

  printf("The value of char is %c\n", *ptr);
  printf("The value of char is %c\n", character);
  printf("The address of char is %u\n", &character);
  printf("The address of pointer is %u", &ptr);

  return 0;
}