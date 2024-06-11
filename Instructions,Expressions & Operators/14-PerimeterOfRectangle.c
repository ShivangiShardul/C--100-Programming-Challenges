#include<stdio.h>

int main(){
  int a,b,c,d;

  printf("Enter the first side:");
  scanf("%d",&a);

  printf("Enter the second side:");
  scanf("%d",&b);

  printf("Enter the third side:");
  scanf("%d",&c);

  printf("Enter the fourth side:");
  scanf("%d",&d);

  int perimeter = a+b+c+d;
  printf("\nPerimeter of Rectangle is %d",perimeter);

  return 0;
}