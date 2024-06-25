#include<stdio.h>
#include<stdlib.h>

int main(){
  printf("Welcome to out Dynamic Characters\n");
  char *sentence = (char*) calloc(100, sizeof(char));
  if(sentence == NULL)
  {
    printf("Memory Error !!!");
    return 1;
  }

  printf("\nEnsuring all elements are initialized.\n");
  for (int i = 0; i < 100; i++){
    printf(" %d", sentence[i]);
  }

  printf("\n Now enter piece of text: ");
  fgets(sentence, 100, stdin);
  printf("\nHere is your text: %s", sentence);

  free(sentence);
  sentence = NULL;

  return 0;
}
