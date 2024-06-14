#include<stdio.h>

int main(){
  int marks;

  printf("Welcome to Grade Calculator\n");

  printf("Enter Your Marks  :");
  scanf("%d",&marks);

  if(marks>90){
    printf("You got Grade A");
  }
  else if(marks>75){
    printf("You got Grade B");
  }
  else if(marks>60){
    printf("You got Grade C");
  }
  else if(marks>30){
    printf("You got Grade D");
  }
  else {
    printf("You have failed the Exam with Grade F");
  }

}