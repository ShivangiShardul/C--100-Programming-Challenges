#include<stdio.h>

int main(){
  char first_name[15] ;
  char last_name[15];
  int age;

  printf("Enter your first name : ");
  scanf("%15s",first_name);

  printf("Enter your last name : ");
  scanf("%15s",last_name);

  printf("Enter your first name : ");
  scanf("%d",&age);

  printf("hii! %s %s you are %d years old.",first_name,last_name,age);
}