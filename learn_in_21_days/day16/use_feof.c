#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  // get the file name from the stdin
  char *filename = (char *) malloc(60 * sizeof(char));
  do {
    printf("Enter a file name: ");
    gets(filename);
  } while (strlen(filename) == 0 );

  // open the file
  FILE *fp;
  if ( (fp = fopen(filename, "r")) == NULL ){
    fprintf(stderr, "Cannot open the file: %s\n", filename);
    exit(1);
  }
  // read the file until EOF 
  char *line;
  while ( feof(fp) == 0 ){
    line = (char *) malloc(50 * sizeof(char));
    fgets(line, 50, fp);
    if (strlen(line) > 0)
      fprintf(stdout, "Line: %s\n", line);
  } 
  fclose(fp);
  return 0;
}
