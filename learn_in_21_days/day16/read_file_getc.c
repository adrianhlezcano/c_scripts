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
  int ch;
  while(1){
    ch = getc(fp);
    if (ch <= 0)
      break;
    printf("%c ", ch);
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
