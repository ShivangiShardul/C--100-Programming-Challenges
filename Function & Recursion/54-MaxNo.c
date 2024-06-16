#include<stdio.h>

float max(float,float);

int main(){
    float first,second;

    printf("Welcome to maximum Number Finder\n");
    printf("Enter the first number :");
    scanf("%f", &first);
    printf("Now, Enter the second number :");
    scanf("%f", &second);

    printf("Maximum number between %.2f and %.2f is %.2f\n", first,second, max(first,second));

    return 0;
}

float max(float first,float second){
  return first > second ? first : second;
}