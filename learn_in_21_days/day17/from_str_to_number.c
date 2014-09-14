#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  char *line, *aux;
  char buffer[6];

  while(1){
    puts("Enter a number (just enter to exit)");
    fgets(buffer, sizeof(buffer), stdin);
    // replace the first '/n' in the entered line
    if ( (aux = strchr(buffer, '\n')) != NULL ){
      buffer[aux-buffer] = '\0';
    }
    if (!strlen(buffer))
      break;

    line = (char *) malloc(strlen(buffer) * sizeof(char));
    strcpy(line, buffer);

    printf("Converting the line entered to integer: %d\n", atoi(line));
    printf("Converting the line entered to long: %ld\n", atol(line));
    printf("Converting the line entered to double: %lf\n", atof(line));   
  }
  return 0;
}

