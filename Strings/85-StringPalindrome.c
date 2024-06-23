#include<stdio.h>
#include<string.h>

int is_palindrome(char str[]);

int main(){
  char text[20];

  printf("Welcome to palindrome checker\n");
  printf("Please enter the text: ");
  scanf("%s", text);

  if(is_palindrome(text)){
    printf("Your input is palindrome");
  }
  else{
    printf("Your input is not a palindrome");
  }
  return 0;
}

int is_palindrome(char str[]){
  int length = strlen(str);
  for (int i = 0; i < length / 2; i++)
  {
    if(str[i] != str[length - 1 -i])
    {
      return 0;
    }
  }
    return 1;
}