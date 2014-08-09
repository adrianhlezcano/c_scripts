#include <stdio.h>
#include <stdlib.h>

int main(void){
  char *name;
  char *greeting;
  name = (char *) malloc(50 * sizeof(char));
  greeting = (char *) malloc(50 * sizeof(char));

  if (name == NULL){
    puts("Cannot allocate memory for the variable name");
  }
  if (greeting == NULL){
    greeting = "";
  }
  puts("Allocated memory for variable name");
  printf("Enter your name: ");
  scanf("%s", name);

  greeting = "Welcome to my command line";

  printf("%s: %s!\n", greeting, name);
  return 0;
}
