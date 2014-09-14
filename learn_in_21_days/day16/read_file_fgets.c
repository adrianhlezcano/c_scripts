#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void enter_filename(char *filename);

int main(void){
  FILE *fp;
  char *filename = (char *) malloc(80 * sizeof(char));
  // input filename
  enter_filename(filename);
  // read the file 
  if ((fp = fopen(filename, "r")) == NULL){
    fprintf(stderr, "Cannot read the file: %s\n", filename);
    return 1;
  }
  fprintf(stdout, "File was open successfully!\n");

  // start reading the file with fgetc(file);
  char *line;
  char *status;
  while(1){
    line = (char *) malloc(15 * sizeof(char));
    status = fgets(line, 15, fp);

    if (line != NULL && strlen(line) > 0)
      printf("%s\n", line);

    if (status == NULL)
      break;
  }
  fprintf(stdout, "\n\nEnd of File\n");
  
  fclose(fp);
  return 0;
}

void enter_filename(char *filename){
  while(1){
    printf("Enter a file to read: ");
    gets(filename);
    if (filename != NULL && strlen(filename)){
      break;
    }
  }
}
