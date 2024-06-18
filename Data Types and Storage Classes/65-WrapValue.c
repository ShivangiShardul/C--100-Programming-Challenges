#include<stdio.h>
#include<limits.h>

int main(){
  unsigned int num = UINT_MAX;
  int normal = INT_MAX;

  printf("Max value of unsigned int is : %u\n", num);
  printf("Max value of normal int is : %d\n", normal);

  num++;
  normal++;

  printf("Max value of unsigned int is : %u\n", num);
  printf("Max value of normal int is : %d", normal);

  return 0;
}