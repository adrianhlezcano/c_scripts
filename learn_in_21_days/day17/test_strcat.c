#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  char *name = (char *) malloc(50 * sizeof(char));
  char *lname = (char *) malloc(30 * sizeof(char));
  char *fname;

  printf("Enter your first name: ");
  gets(name);
  printf("Enter your last name: ");
  gets(lname);
  int total_len = strlen(name) + strlen(lname) + 2;
  fname = (char *) malloc(total_len * sizeof(char));

  strcat(fname, name);
  strcat(fname, " ");
  strcat(fname, lname);

  printf("Your full name is: %s\n", fname);
  return 0;
}
