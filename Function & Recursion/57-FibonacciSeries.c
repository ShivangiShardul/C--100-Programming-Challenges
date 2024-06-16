#include<stdio.h>

int fibo(int pos);

int main(){
  int terms;

  printf("Welcome to Fibonacci by Recurstion\n");
  printf("Enter the no of terms needed :");
  scanf("%d", &terms);

  for (int i; i < terms; i++){
    printf(" %d ", fibo(i));
  }

    return 0;
}

int fibo(int pos){
  if(pos <= 1){
    return pos;
  }
  int current = fibo(pos - 1) + fibo(pos - 2);
  return current;
}