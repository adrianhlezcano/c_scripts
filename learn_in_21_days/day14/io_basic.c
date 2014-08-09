#include<stdio.h>

int main(void){
  char buffer[256];
  // get a text and display it in the same line
  puts(gets(buffer));

  return 0;  
}
