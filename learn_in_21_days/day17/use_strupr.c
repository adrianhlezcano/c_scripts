#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void){
  char *line, *aux;
  char buffer[80];
  // get a line from the stdin
  while(1){
    puts("Enter a line of text (just enter to exit) ");
    fgets(buffer, sizeof(buffer), stdin);
    if ( ( aux = strchr(buffer, '\n')) != NULL){
      buffer[aux-buffer] = '\0';
    }
    // if (buffer[0] == '\n' || aux == NULL){
    if (!strlen(buffer)){
      break;
    }
    int len = strlen(buffer);
    line = (char *) malloc(len * sizeof(char));
    buffer[len-1] = '\0';
    strcpy(line, buffer);
    
    printf("The line entered is: %s\n", line);
    int i;
    for ( i = 0; buffer[i]; i++){
      buffer[i] = toupper(buffer[i]);
    }
    strcpy(line, buffer);
    printf("The same line in UPPERCASE: %s\n", line);
    for ( i = 0; buffer[i]; i++){
      buffer[i] = tolower(buffer[i]);
    }
    strcpy(line, buffer);    
    printf("The same line in lowercase: %s\n", line);
  }
  return 0;  
}
