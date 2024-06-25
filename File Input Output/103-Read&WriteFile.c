#include<stdio.h>
#include<string.h>

int main(){
  printf("Welcome to world of reading and writing in file\n");

  FILE *file = fopen("data.txt", "r+");
  if(file == NULL){
    printf("\nerror opening file");
    return 1;
  }

  char buffer[100];
  fgets(buffer, 100, file);
  printf("Reading from file in found: %s", buffer);

  fseek(file, 0, SEEK_END);
  fputs("\nThis msg was written by program", file);

  fclose(file);
  file = NULL;

  return 0;
}