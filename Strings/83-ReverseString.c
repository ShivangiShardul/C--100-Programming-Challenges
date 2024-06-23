#include<stdio.h>
#include<string.h>

void reverse_string(char str[]);

int main(){
  char text[100];

  printf("Welcome to Reversing the string\n");
  printf("Enter the text: ");
  fgets(text, sizeof(text), stdin);

  puts("original text is:");
  puts(text);
  reverse_string(text);
  puts("reversal text is:");
  puts(text);

  return 0;
}

void reverse_string(char str[]){
  int length = strlen(str);
  for (int i = 0; i < length / 2; i++){
    char temp = str[i];
    str[i] = str[length - 1 - i];
    str[length - 1 - i] = temp;
  }
}