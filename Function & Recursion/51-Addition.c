#include<stdio.h>

int add(int,int,int,int);

int main(){
    int a, b, c, d;

    add(2, 4, 6, 8);
    printf("\n");
    add(20, 14, 26, 80);

    return 0;
}

int add(a,b,c,d){
   int sum = a+b+c+d;
   printf("Sum of 4 numbers is %d", sum);
}