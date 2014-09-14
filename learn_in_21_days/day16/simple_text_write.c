#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void clear_console(void);

int main(void){
  char filename[40];
  char line[80];
  FILE *fp;
  int count;
  
  // get the file name
  printf("Enter an output file name: ");
  gets(filename);

  // open the file as write mode
  if ((fp = fopen(filename, "w")) == NULL){
    fprintf(stderr, "Cannot open the filename %s.\n", filename);
    return 1;
  }  

  // insert lines to the file
  char *aux;
  for(count = 0; count < 5; count++){
    printf("Enter a pharse: ");
    aux = fgets(line, 78, stdin);
    int length = strlen(line);
    if ( length >= 77 ) {
      line[78] = '\n';
      line[79] = '\0';
    }
    if ( aux != NULL || length > 0){
      // write to a file
      fputs(line, fp);  
    }      
    clear_console();
  }
  
  // close the file
  fclose(fp);
  return 0;
}

void clear_console(void){
  char buff[255];
  gets(buff);
}
