#include<stdio.h>

int main(){
  int marks;

  printf("Welcome to Check which Category you belong to\n");

  printf("Enter Your Marks  :");
  scanf("%d",&marks);

  //solution 1 - ternary operator

  printf("Your marks are in this category:");
  marks >80 ? printf("High") 
            : (marks >= 50 ? printf("Moderate") 
                           : printf("Low"));


  // solution 2 - 

  // if(marks>80){
  //   printf("Your marks are in High category");
  // }
  // else if(marks>=50){
  //   printf("Your marks are in Moderate category");
  // }
  // else {
  //   printf("Your marks are in Low category");
  // }

}