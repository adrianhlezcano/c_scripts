#include <stdio.h>
#include <stdlib.h>

void clear_console(void);

int main(void){
  FILE *fp;
  double prices[5];
  char filename[40];
  int count;
  for (count=0; count<5; count++){
    printf("Enter a price value: ");
    scanf("%lf", &prices[count]);
  } 
  /* Get the filename and open the file. First 
  clear the stdin */
  clear_console();
  puts("Enter an output file name: ");
  gets(filename);

  // open the file
  if ((fp = fopen(filename, "w")) != NULL){
    fprintf(stdout, "The file was opened successfully\n");
    // write data to the file
    for (count = 0; count < 5; count++){
      fprintf(fp, "\n%d Price value: %lf", (count+1), prices[count]);
      fprintf(stdout, "\n%d Price value: %lf", (count+1), prices[count]);
    }
    fclose(fp);
    fprintf(stdout, "\nThe data was stored successfully in %s\n", filename);   
  } else {
    fprintf(stderr, "\nCannot open the file specified. \n");
    return 1;
  }
  return 0;
}

void clear_console(void){
  char buff[80];
  gets(buff);
}
