#include<stdio.h>
#include<string.h>

int main(){
  const char PASSWORD[] = "SecretPasscode";
  char password[20];

  printf("Welcome to the Secure login System\n\n");
  printf("Please enter your password:");
  scanf("%s", password);

  if(strcmp(password,PASSWORD) == 0){
    puts("Access Granted to the system");
  }else {
    puts("Access Denied to the system");
  }

  return 0;
}