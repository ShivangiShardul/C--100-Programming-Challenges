#include<stdio.h>

int reverse(int num, int rev);

int main(){
  int num;

  printf("Wecome to palindrome Checker\n");
  printf("Enter the Number :");
  scanf("%d", &num);

  int rev = reverse(num, 0);
  if (num == rev)
  {
    printf("%d is palindrome", num);
  }
  else{
    printf("%d is not a palindrome", num);
  }

  return 0;
}

int reverse(int num, int rev){
  if( num == 0){
    return rev;
  }

  int rem = num % 10;
  int new_num = num / 10;
  int new_rev = rev * 10 + rem;
  return reverse(new_num, new_rev);
}