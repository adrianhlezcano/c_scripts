#include<stdio.h>
#include<stdlib.h>
#define MAX 10


int main(void){
  char buffer[MAX];
  char *ptr = (char *) malloc(MAX * sizeof(char));
  char *c;

  puts("Enter a phrase or write a blank to exit");

  while(1){
    c = fgets(buffer, MAX, stdin);
    
    if (buffer[0] == '\n'){
      break;
    } 
    puts(buffer);
  }
  
  puts("Enter another phrase or write a blank to exit");

  while(1){
    c = fgets(ptr, MAX, stdin);
    
    if (*ptr == '\n'){
      break;
    } 
    puts(ptr);
  }
  return 0;

}
