#include<stdio.h>

int main(){
  int rows;

  printf("Welcome to Printing Patterns\n");

  printf("Please, Enter the number of rows : ");
  scanf("%d",&rows);

  printf("Here is the right half pyramid\n");
  for (int i = 1; i <= rows;i++)
  {
    for (int j = 0; j < i; j++)
    {
      printf("* ");
    }
      printf("\n");
  }

  printf("\nHere is the right half reverse pyramid");
  for (int i = 0; i <rows;i++)
  {
      printf("\n");
    for (int j = 0; j < rows - i; j++)
    {
      printf("* ");
    }
  }

  printf("\nHere is the left half pyramid\n");
  for (int i = 1; i <= rows;i++)
  {
    printf("\n");

    for (int k = 0; k < rows-i; k++)
    {
      printf("  ");
    }

    for (int j = 0; j < i; j++)
    {
      printf("* ");
    }  
  }

  printf("\nHere is the full pyramid\n");
  for (int i = 1; i <= rows;i++)
  {
    printf("\n");

    for (int k = 0; k < rows-i; k++)
    {
      printf(" ");
    }

    for (int j = 0; j < i; j++)
    {
      printf("* ");
    }  
  }

    return 0;
}