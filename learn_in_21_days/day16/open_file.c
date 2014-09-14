#include <stdio.h>
#include <stdlib.h>

int main(void){
  FILE *fp;
  char opc, filename[40], mode[4];

  while(1){
    printf("Enter a file name: ");
    gets(filename);
    printf("Enter a mode open (3 char max.): ");
    gets(mode);
    
    if ((fp = fopen(filename, mode)) != NULL){
      printf("\nThe file %s in mode %s was successfully opened!\n", filename, mode);
      fclose(fp);
    } else {
      printf("\nThe file %s in mode %s couldn't be opened!\n", filename, mode);
    }
    puts("Enter x to exit or anything to continue processing: ");
    opc = getc(stdin);
    if (opc == 'x' || opc == 'X')
      break;
    else
      continue;
  }
  return 0;
}
