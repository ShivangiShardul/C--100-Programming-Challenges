#include<stdio.h>

int main(){
  float fahrenheit;

  printf("Welcome to Fahrenheit to Celsius Calculator:");

  printf("\nPlease,Enter temperature in Fahrenheit:");
  scanf("%f",&fahrenheit);

  float celsius = (fahrenheit - 32) * 5/9;

  printf("Temperature in Celsis is %.2f degree celsius",celsius);

  return 0;

}