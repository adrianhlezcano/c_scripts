#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  char line[80];
  int len;
  char *dest_line;
  // get a line from stdin
  while(1){
    printf("Enter a line: ");
    fgets(line, 79, stdin);
    if (line[0] != '\n'){
      len = strlen(line) - 1;
      line[len] = '\0';  // replace the last char = '\n' for '\0'
      break;
    }
  }
  dest_line = (char *) malloc(len * sizeof(char));
  strcpy(dest_line, line);
  printf("This is a copy of the line entered: %s (len=%d)\n", dest_line, len);
  return 0;
}
