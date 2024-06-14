#include<stdio.h>

int main(){
  int age;

  printf("Enter your Age :");
  scanf("%d",&age);
  
  if(age<13){
    printf("You are a child");
  }
  else if(age<20){
    printf("You are a teen");
  }
  else if (age<60){
    printf("You are adult");
  }
  else {
    printf("You are old/senior");
  }

}