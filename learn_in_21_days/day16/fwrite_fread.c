#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 20

int main(void){
  FILE *fp;
  char *filename = "array.txt";
  double array1[SIZE], array2[SIZE];
  // read the file 
  if ((fp = fopen(filename, "wb")) == NULL){
    fprintf(stderr, "Cannot open the file: %s\n", filename);
    return 1;
  }
  fprintf(stdout, "File was open successfully!\n");

  // start writing the file with putc(file);  
  int i;  
  double dec_value = 2.0;
  for (i=0; i<SIZE; i++){
    array1[i] = dec_value * i;
    dec_value += 0.0993;
  }
  // write the array in the file
  if ( (fwrite(array1, sizeof(double), SIZE, fp)) != SIZE ){
    fprintf(stderr, "Cannot write the data in the file\n");
  }
  
  fclose(fp);

  // read the file 
  if ((fp = fopen(filename, "rb")) == NULL){
    fprintf(stderr, "Cannot open the file: %s\n", filename);
    return 1;
  }
  
  if ( (fread(array2, sizeof(double), SIZE, fp)) != SIZE ){
    fprintf(stderr, "Cannot read file\n");
    return 1;
  }

  fclose(fp);

  puts("Print data output and input");
  for (i = 0; i < SIZE; i++){
    printf("Array1: %lf\t\tArray2: %lf\n", array1[i], array2[i]);
  }
  return 0;
}
