#include<stdio.h>

int main(){
  int a;
  float b;
  double c;
  char d;

  printf("The size of Integer is %lu bytes\n",sizeof(a));
  printf("The size of Float is %lu bytes\n",sizeof(b));
  printf("The size of Double is %lu bytes\n",sizeof(c));
  printf("The size of Char is %lu bytes",sizeof(d));
}