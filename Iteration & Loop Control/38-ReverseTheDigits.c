#include<stdio.h>

int main(){
  int num;

  printf("Reverse the Digits of Given Integer\n");
  printf("Enter the number : ");
  scanf("%d",&num);

  int reverse=0;
  int copy = num;
  while (copy > 0)
  {
    reverse = reverse * 10  + (copy % 10);
    copy /= 10;
  }
  
  printf("The reverse of number %d is %d",num,reverse);

  return  0;
}