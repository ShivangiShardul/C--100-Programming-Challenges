#include<stdio.h>
#include<string.h>

int main(){
  const char PASSWORD[] = "Passcode";
  char password[20];

  printf("Welcome to the Secure login System\n\n");

  do{
      printf("Please enter your password:");
      scanf("%s", password);
  } while (strcmp(password,PASSWORD) != 0);

  printf("Access Granted to the system");

  return 0;
}