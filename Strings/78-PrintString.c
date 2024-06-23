#include<stdio.h>

int main(){
  // char msg[20];
  char name[25];

  printf("Welcome to printing fgets and puts:");
  printf("\nEnter your Full name :");
  fgets(name, sizeof(name), stdin);

  printf("The name you entered is :");
  puts(name);

  // printf("\nenter your msg :");
  // fgets(msg, 20, stdin);
  // puts(msg);

  return 0;
}