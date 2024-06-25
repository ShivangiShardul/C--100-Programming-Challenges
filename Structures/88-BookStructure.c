#include<stdio.h>
#include<string.h>

struct Book
{
  char title[100];
  char author[100];
  float price;
};

typedef struct Book Book;

void input_book(Book *book){
  printf("\nPlease enter the title of book: ");
  fgets(book->title, 100, stdin);
  book->title[strcspn(book->title, "\n")] = 0;
  printf("Please enter the author of book: ");
  fgets(book->author, 100, stdin);
  book->author[strcspn(book->author, "\n")] = 0;
  printf("Please enter the price of book: ");
  scanf("%f",&(book->price));
  while(getchar() != '\n');
}

void print_book(Book *book){
  printf("\n%s is written by %s, and sold for Rs%.2f", book->title, book->author, book->price);
}

int main(){
  printf("Welcome to the Book Store\n");
  Book books[3];

  for (int i = 0; i < 3; i++)
  {
    input_book(&books[i]);
  }

  printf("\nHere are the details of the book");
  for (int i = 0; i < 3; i++)
  {
    print_book(&books[i]);
  }
  

  return 0;
}