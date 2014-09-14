#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int existsFile(char *filename);

int main(){
  FILE *fp;
  int count_char[96];
  char *filename;
  char line[80];
  int line_length;
  // read the file name 
  while(1){
    printf("Enter a file name: ");  
    fgets(line, 79, stdin);
    line_length = strlen(line);
    line[line_length - 1] = '\0';
    if (line[0] != '\0'){
      filename = (char *) malloc((strlen(line)+1) * sizeof(char));
      strcpy(filename, line);
      printf("File name: %s", filename);
      break;
    }
  }
  // check if the file exists
  if (!existsFile(filename)){
    fprintf(stderr, "The file doesn't exists!\n");
    return 1;
  }
  // open the file
  if ( (fp = fopen(filename, "rb")) == NULL){
    fprintf(stderr, "Cannot open the file: %s\n", filename);
    return 1;
  }
  // create the array of chars
  int i;
  for(i=31; i<127; i++){
    count_char[i - 31] = 0;
  }
  // start reading the file
  char c;
  while(1){
    c = fgetc(fp);
    if (feof(fp)){
      break;
    }
    if (c >= 31 && c < 127){
      count_char[c - 31]++;
    }
  }
  fclose(fp);
  // print the result 
  printf("\nNumber of characters in the file: %s\n", filename);
  for (i=31; i<127; i++){
    printf("%c => %d;\t", i, count_char[i-31]);
  }
  puts("");
  return 0;
}

int existsFile(char *filename){
  FILE *fp;
  if ( (fp = fopen(filename, "r")) == NULL){
    fprintf(stderr, "Cannot open the file: %s\n", filename);
    return 0;
  } else {
    fclose(fp);
    return 1;
  }
}

