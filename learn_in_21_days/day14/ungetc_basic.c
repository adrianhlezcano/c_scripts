#include<stdio.h>

int main(void){
  char c;
  char end = 'A';
  int counter = 0;  

  while( (c = ungetc(end, stdin)) && counter < 10 ){
    counter++;
    putchar(c);
  }

  return 0;
}
