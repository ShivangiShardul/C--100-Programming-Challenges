#include <stdio.h>

void increment(int);

int main(){
  int num;

  printf("Enter the number :");
  scanf("%d", &num);

  printf("\nBefore : Value of num is %d", num);
  increment(num);
  printf("\nAfter : Value of num is %d", num);

  return 0;
}

void increment(int a){
  printf("\nBefore : Value of a is %d", a);
  a++;
  printf("\nAfter : Value of a is %d", a);
}