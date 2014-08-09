#include<stdio.h>

int main(void){
  int char_value;
  int counter = 0;
  while( (char_value = getchar()) != '\n' ){
    counter++;
    printf("%d: ", counter);
    putchar(char_value);
    puts("");
  }
  return 0;
}
