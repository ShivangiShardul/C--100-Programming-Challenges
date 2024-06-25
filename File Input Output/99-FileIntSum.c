#include<stdio.h>

int main(){
  const char filename[] = "numbers.txt";
  FILE *file = fopen(filename, "r");
  if(file == NULL){
    printf("\nfile could not be opened");
    return 1;
  }

  int temp;
  int sum = 0;
  int read_status;

  while(fscanf( file,"%d", &temp) == 1){
    sum += temp;
  }

  // do{
  //   read_status = fscanf(file,"%d", &temp);
  //   sum += temp;
  // } while (read_status == 1);

  printf("\nThe sum of all numbers is: %d", sum);
  fclose(file);
  file = NULL;

  return 0;
}