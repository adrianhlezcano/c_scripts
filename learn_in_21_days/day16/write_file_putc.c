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
  if ((fp = fopen(filename, "w")) == NULL){
    fprintf(stderr, "Cannot read the file: %s\n", filename);
    return 1;
  }
  fprintf(stdout, "File was open successfully!\n");
  // start writing the file with putc(file);
  int ch;
  int ch_out;
  char buffer[124];

  while(1){
    puts("\nEnter a line to store in a file (press enter to exit): ");
    gets(buffer);
    
    if (buffer == NULL || strlen(buffer) == 0)
      break;

    puts("Writing...");
    for (ch = 0; ch < strlen(buffer); ch++){
      ch_out = putc(buffer[ch], fp);
      printf("%c", ch_out);
    }
    putc('\n', fp);
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
