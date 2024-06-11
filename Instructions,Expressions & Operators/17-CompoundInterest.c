#include<stdio.h>
#include<math.h>

int main(){
  float principal, rate, time;

  printf("Welcome to Compound Interest Calculator:");

  printf("\nPlease, Enter the Principal:");
  scanf("%f",&principal);

  printf("Now,Enter the Rate(%):");
  scanf("%f",&rate);

  printf("Lastly,Enter the Duration(time):");
  scanf("%f",&time);

  float compound_interest = principal*pow(1+ rate/100 ,2);

  printf("\nCompound Interest is %.2f",compound_interest);
  
  return 0;
}