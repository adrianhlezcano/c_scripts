#include <stdio.h>
#include <stdlib.h>

void display_usage(void);

int main(int argc, char *argv[]){
  if (argc < 2){
    display_usage();
    return 1;
  }

  char buffer[256];
  FILE *fp;
  int line = 1;

  fp = fopen(argv[1], "r");
 
  if (fp == NULL){
    fprintf(stderr, "Cannot open the file: %s\n", argv[1]);
    return 1;
  }

  while(fgets(buffer, 256, fp) != NULL){
    fprintf(stdout, "%4d:\t%s", line++, buffer);
  }

  fclose(fp);
  return 0;
}

void display_usage(void){
  fprintf(stderr, "\nProper Usage is: ");
  fprintf(stderr, "./list_it.o <filename>\n");
}
