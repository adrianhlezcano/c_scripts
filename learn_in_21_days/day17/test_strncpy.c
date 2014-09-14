#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  char *name = "Adrian";
  char *cp_name = (char *) malloc(4 * sizeof(char));

  strncpy(cp_name, name, 3);
  printf("Copy the first 3 characters of %s: %s\n", name, cp_name);
  return 0;
}
