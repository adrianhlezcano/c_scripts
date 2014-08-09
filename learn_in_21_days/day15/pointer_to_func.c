#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *get_line(void);
char *(*p)(void);

void print_line(char *line);
void (*p2)(char *line);

int main(void){
  p = get_line;
  char *line = p();
  
  puts("Print the line twice");
  print_line(line);
  p2 = print_line;
  p2(line);  

  return 0;
}

char *get_line(void){
  printf("Enter characters: ");
  char buff[100];
  fgets(buff, 100, stdin);

  char *line = (char *) malloc(strlen(buff) + 1);
  if (line != NULL){
    strcpy(line, buff);
  }
  return line;
}

void print_line(char *line){
  puts(line);
}
