#include<stdio.h>

int main(){
  printf("Welcome to file copying\n");

  FILE *src_file = fopen("hello.txt", "r");
  FILE *dest_file = fopen("copy.txt", "w");

  if(src_file == NULL || dest_file == NULL){
    printf("\nfile could not be opened");
    return 1;
  }

  while (1)
  {
    char c = fgetc(src_file);
    if (c == EOF) break;
    fputc(c, dest_file);
    printf(".");
  }

  fclose(src_file);
  fclose(dest_file);
  src_file = NULL;
  dest_file = NULL;

  return 0;
}