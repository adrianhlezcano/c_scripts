#include<stdio.h>

int main(void){
  char title[] = "Hello Everybody. Reading a line with fputc().";
  int c;

  while (title[c] != '\0'){
    fputc(title[c], stdout);
    c++;
  }
  puts("");
  return 0;
}
