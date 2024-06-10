#include <stdio.h>

int main(){
  const float PI = 3.14159;
  int radius;
  float area;

  printf("Enter the Radius of Circle : ");
  scanf("%d",&radius);

  area = PI * radius * radius;

  printf("Area of Circle with radius %d is %f cm2",radius,area);

  return 0;
}