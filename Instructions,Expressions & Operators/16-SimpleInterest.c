#include<stdio.h>

int main(){
  float principal, rate, time;

  printf("Welcome to Simple Interest Calculator:");

  printf("\nPlease, Enter the Principal:");
  scanf("%f",&principal);

  printf("Now,Enter the Rate(%):");
  scanf("%f",&rate);

  printf("Lastly,Enter the Duration(time):");
  scanf("%f",&time);

  float simple_interest = (principal*rate*time)/100;

  printf("\nSimple Interest is %.2f",simple_interest);
  
  return 0;
}