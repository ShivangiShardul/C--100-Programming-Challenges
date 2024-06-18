#include<stdio.h>

void min_max(int *, int *, int *, int *);

int main(){
  int a, b, min, max;
  printf("Wecome to finding min and max:\n ");
  printf("Please,Enter the first value :");
  scanf("%d", &a);
  printf("Please,Enter the Second value :");
  scanf("%d", &b);

  min_max(&a,&b,&min,&max);
  printf("Between %d and %d, minimum is %d and maximum is %d", a, b, min, max);

  return 0;
}

void min_max(int *a, int *b, int *min, int *max){
  if( *a > *b){
    *min = *b;
    *max = *a;
  }
  else{
    *min = *a;
    *max = *b;
  }
}