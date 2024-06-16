#include<stdio.h>

int square(int);

int main(){
    int num;

    printf("welcome to square calculator\n");
    printf("Enter the number to square:");
    scanf("%d", &num);

    printf("Square of number %d is %d\n", num, square(num));

    return 0;
}

int square(int num){
  return num * num; 
}