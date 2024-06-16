#include<stdio.h>

int average(int, int, int, int, int);

int main(){
    int num1, num2, num3, num4, num5;

    printf("Enter the first number :");
    scanf("%d", &num1);
    printf("Enter the second number :");
    scanf("%d", &num2);
    printf("Enter the third number :");
    scanf("%d", &num3);
    printf("Enter the fourth number :");
    scanf("%d", &num4);
    printf("Enter the fifth number :");
    scanf("%d", &num5);

    int avg = average(num1, num2, num3, num4, num5);

    printf("Average of 5 numbers is %d", avg);

    return 0;
}

int average(int a,int b,int c,int d,int e)
{
   int sum = a + b + c + d + e;
   printf("sum of 5 numbers is %d\n", sum);
   return sum / 5;
}