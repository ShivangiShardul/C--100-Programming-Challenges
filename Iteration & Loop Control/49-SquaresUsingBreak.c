#include<stdio.h>

int main(){
  int num,max;

  printf("Welcome to world of squares\n");

    while(1){
       printf("Please, Enter the number : ");
       scanf("%d",&num);
       if (num == -1) break;
       printf("The Square of %d is %d\n", num, num * num);
    }

    printf("Bye Bye");
    return 0;
}