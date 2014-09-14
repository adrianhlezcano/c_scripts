#include<stdio.h>
#include<stdlib.h>

int main(void){
  float nums[5];
  int count;
  char filename[40];
  FILE *fp;

  puts("Enter a file name to read data");
  gets(filename);
  // open file
  if ((fp = fopen(filename, "r")) == NULL){
    fprintf(stderr, "\nCannot open the file specified\n");
    return 1;
  }
  fscanf(fp, "%f %f %f %f %f", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);
  for(count = 0; count < 5; count++){
    fprintf(stdout, "\n%d price: %f", (count+1), nums[count]);
  } 
  fclose(fp);
  printf("\nAll prices were read successfully!\n");
  return 0;  
}
