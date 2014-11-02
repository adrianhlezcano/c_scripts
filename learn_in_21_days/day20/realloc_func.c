#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  char buffer[80];
  char *p_line;
 
  do {
    printf("Enter your first name: ");
    fgets(buffer, 79, stdin);
  } while ( buffer[0] == '\n' ); 
  int len = strlen(buffer);
  buffer[len-1] = '\0';
  p_line = realloc(NULL, len);
  strcpy(p_line, buffer);

  printf("\tYour name is %s. \n", p_line);

  printf("Enter your last name: ");
  fgets(buffer, 79, stdin);

  len = strlen(buffer);
  buffer[len-1] = '\0';

  p_line = realloc(p_line, len + strlen(p_line) + 1);
  if (p_line != NULL) {
    strcat(p_line, " ");
    strcat(p_line, buffer);    
  }
  printf("\tYour full name is: %s.\n", p_line);
  return 0;
}
