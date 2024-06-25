#include<stdio.h>

struct Book
{
  char title[100];
  char author[100];
  float price;
};

typedef struct Book Book;

typedef struct
{
  char id[10];
  char name[50];
  char year[10];
  char grade;
  int no_of_books;
  Book borrowed_books[3];
} Student;

void print_student(Student *);
void print_book(Book *);

int main(){
  Student stu1 = {
    .id = "CS001",
    .name = "Ram",
    .year = "First",
    .grade = 'B',
    .no_of_books = 2,
    .borrowed_books = {
        {.title = "Kite Runner", .author = "Khalid Hussani", .price = 300},
        {.title = "Atomic Habit", .author = "James Clear", .price = 350},
    }
};
  //  Student stu2 = {.id = "CS002", .name = "Raavi", .year = "Second", .grade = 'A',.no_of_books = 1, .borrowed_books = {{.title = "Kite Runner", .author = "Khalid Hussani", .price = 300},}};
  // Student stu3 = {.id = "CS003", .name = "Raghu", .year = "Third", .grade = 'F',no_of_books = 0};

  printf("Welocome to our college\n");
  printf("Here are the Student details:");
  print_student(&stu1);

  return 0;
}

void print_student(Student *stu){
  printf("\nThe student with %s name has id: %s and studies in %s year has achieved %c grade", stu->name, stu->id, stu->year, stu->grade);
  printf("\nHere are the books borrowed");
  for (int i = 0; i < stu->no_of_books;i++){
    print_book(&stu->borrowed_books[i]);
  }
}

void print_book(Book *book){
  printf("\n%s is written by %s, and sold for Rs%.2f", book->title, book->author, book->price);
}