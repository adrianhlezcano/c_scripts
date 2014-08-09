#include <stdio.h>
#include <stdlib.h>

int main(void){
  char *fullname;
  fullname = (char *) malloc(100 * sizeof(char));
  
  if (fullname == NULL){
    puts("Cannot allocate memory for your name");
    return 1;
  }
  printf("Enter your full name: ");
  gets(fullname);

  printf("Hi %s!\n", fullname);
  return 0;
}
