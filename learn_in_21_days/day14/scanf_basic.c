#include<stdio.h>

void clear_console(void);

int main(void){
  int age;
  char name[50];

  printf("Enter your age: ");
  scanf("%d", &age);
  clear_console();

  printf("Enter your name: ");
  scanf("%s", name);
  clear_console();

  printf("Hi %s, you're %d years old\n", name, age);
  return 0;
}

void clear_console(void){
  char buffer[200];
  gets(buffer);
}
