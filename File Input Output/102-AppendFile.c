#include<stdio.h>
#include<string.h>

int main(){
  printf("Welcome to Appending in file\n");

  FILE *file = fopen("user-input.txt", "a");
  if(file == NULL){
    printf("\nfile not found");
    return 1;
  }

  char input[100];

  while(1)
  {
    printf("\nEnter your text to be written to file:");
    fgets(input, 100, stdin);
    if(strcmp(input, "exit\n") == 0) break;
    fputs(input, file);
  };

  fclose(file);
  file = NULL;

  return 0;
}