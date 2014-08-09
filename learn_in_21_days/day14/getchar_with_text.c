#include<stdio.h>
#define MAX 50

int main(void){
  char c, buffer[MAX+1];
  int counter = 0;

  while( (c = getchar()) != '\n' && counter < MAX){
    buffer[counter++] = c;
  }
  
  buffer[counter] = '\0';
  printf("%s\n", buffer);
  return 0;
}
