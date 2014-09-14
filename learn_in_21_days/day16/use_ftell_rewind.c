#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  FILE *fp;
  char *filename = "phrases.txt";
  
  // open the file in w mode
  if ( (fp = fopen(filename, "w")) == NULL){
    fprintf(stdout, "Cannot open the file\n");
    exit(1);
  }
  // write data
  char line_entered[84];
  char *line;
  
  while(1){
    printf("Enter a phrase (press enter to exit): ");
    fgets(line_entered, 84, stdin);
    int length = strlen(line_entered);
    if ( line_entered[0] == '\n')
      break;
    line = (char *) malloc(length * sizeof(char));
    strcpy(line, line_entered);

    fputs(line, fp);
  }
  puts("All data was written successfully!");
  fclose(fp);
  
  // open the file to read
  if ((fp = fopen(filename, "r")) == NULL){
    fprintf(stdout, "Cannot open the file!");
    exit(1);
  }
  printf("\nInmediatly after opening, position: %ld\n", ftell(fp));
  char buffer[5];
  char *status;
  while(1){
    status = fgets(buffer, 5, fp);
    if (strlen(buffer) > 0){
      printf("Read: %s, position: %ld\n", buffer, ftell(fp));
    }
    if (status != NULL ){
      printf("Read from the begining (y/n): ");
      if ( getc(stdin) == 'y' ){
        rewind(fp);
        puts("Reading from the begining");
      }
      puts("");
    } else {
      break;
    }        
  }
  fclose(fp);
  return 0;
}

