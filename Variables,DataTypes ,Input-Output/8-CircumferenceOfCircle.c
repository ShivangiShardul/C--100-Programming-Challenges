#include <stdio.h>

int main(){
  const float PI = 3.14159;
  int radius;
  float circumference;

  printf("Enter the Radius of Circle : ");
  scanf("%d",&radius);

  circumference = 2* PI * radius;

  printf("Circumference of Circle with radius %d is %f cm",radius,circumference);

  return 0;
}