#include<stdio.h>

int main(){
  int num,max;

  printf("Welcome to Even Number Printer\n");
  printf("Please, Enter the max number : ");
    scanf("%d",&max);

    for (int i = 1; i <= max;i++){
      if(i % 2 == 1) continue;
      printf("%d ", i);
    }
      return 0;
}