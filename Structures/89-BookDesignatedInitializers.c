#include<stdio.h>
#include<string.h>

struct Book
{
  char title[100];
  char author[100];
  float price;
};

typedef struct Book Book;

void print_book(Book *book)
{
  printf("\n%s is written by %s, and sold for Rs%.2f", book->title, book->author, book->price);
}

int main(){
  printf("Welcome to the Book Store\n");
  Book books[3] = {
    {.title = "Thousand Splendid Suns", .author = "Khalid Hussani", .price = 400},
    {.title = "Kite Runner", .author = "Khalid Hussani", .price = 300},
    {.title = "Atomic Habit", .author = "James Clear", .price = 350},
  };

  printf("\nHere are the details of the book");
  for (int i = 0; i < 3; i++)
  {
    print_book(&books[i]);
  }
  
  return 0;
}