#include<stdio.h>
#include<math.h>

int main(){
  int one,two,sum;
  printf("Enter integer 1:");
  scanf("%d",&one);
  printf("Enter integer 2:");
  scanf("%d",&two);
  sum = one+two;
  printf("Sum of integers %d and %d is %d",one,two,sum);
  return 0;
}