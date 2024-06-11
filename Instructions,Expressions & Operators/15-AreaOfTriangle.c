#include<stdio.h>

int main(){
  float height,breadth;

  printf("Enter the height of triangle:");
  scanf("%f",&height);

  printf("Enter the breadth ogf triangle:");
  scanf("%f",&breadth);

  float area = 0.5*height*breadth;

  printf("Area of Triangle is %.2f",area);

  return 0;

}