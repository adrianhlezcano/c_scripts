/* Program: Coder.c
   Usage: Coder [filename] [action]
          where filename = filename for/with coded data
          where action = D for decode anything else for coding
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int encode_character(int ch, int val);
int decode_character(int ch, int val);

int main(int argc, char *argv[]){
  FILE *fh;     // file handle
  int rv = 1;   // return value
  int ch = 0;   // variable to hold a character
  unsigned int ctr = 0; // counter
  int val = 5;  // value to code with
  char buffer[257]; // buffer

  if (argc != 3){
    printf("\nError: Wrong number of parameters...");
    printf("\n\tUsage:\t%s filename action", argv[0]);
    printf("\n\t\tWhere:");
    printf("\n\t\tfilename = name of the file to code or decode");
    printf("\n\t\taction = D for decode or C for encode\n\n");
    rv = -1;
  }
  else if((argv[2][0] == 'D') || (argv[2][0] == 'd')){
    /* Decode the file  */
    fh = fopen(argv[1], "r");
    if (fh <= 0 ){
      printf("\n\nError opening the file ...");
      rv = -2;
    } else {
      ch = getc(fh);
      while ( !feof(fh) ){
        ch = decode_character(ch, val);
        putchar(ch); /* write the character to screen */
        ch = getc(fh);  
      }
      fclose(fh);
      printf("\n\nFile decode to screen.\n");
    }    
  } 
  else {
    fh = fopen(argv[1], "w");
    if (fh <= 0){
      printf("\n\nError creating file...");
      rv = -3;
    } else {
      printf("\nEnter a text to be coded...");
      printf("\nEnter a blank line to end.\n\n");

      while( gets(buffer)!=NULL){
        if (buffer[0] == 0)
          break;

        for(ctr = 0; ctr < strlen(buffer); ctr++){
          ch = encode_character(buffer[ctr], val);
          ch = fputc(ch, fh); /* write the character to file */
        }
      }
      printf("\n\nFile encoded to file.\n");
      fclose(fh);
    }
  }
  return (rv);
}

int encode_character(int ch, int val){
  ch = ch + val;
  return ch;
}

int decode_character(int ch, int val){
  ch = ch - val;
  return ch;
}
