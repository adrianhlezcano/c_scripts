#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  // Get time in seconds = long value
  time_t t1;
  time_t *p_t1 = &t1;
  t1 = time(p_t1);

  printf("time in seconds: %ld\n", t1);
 
  // Get time as tm = struct
  struct tm *tm_ptr = localtime(p_t1);

  // Display the date using default format
  printf("[ctime] Date: %s\n", ctime(p_t1));
  printf("[asctime] Date: %s\n", asctime(tm_ptr));
  
  // Display the date using custom format
  char *date_fmt = (char *) malloc(26 * sizeof(char));
  size_t s_t = strftime(date_fmt, 26, "%d/%m/%Y %H:%M:%S %Z", tm_ptr);
  if (s_t > 0){
    printf("[custom format] Date: %s\n", date_fmt);
  }
 
  // Calcuate the duration of process
  // that iterate 100000 times to calculate
  // a simple math operation
  unsigned long x = 0;
  int i, j;
  for (i = 0; i < 100000; i++) {
    for (j=0; j < 100000; j++) {
      x++;
    }    
  }
  time_t t2 = time(0);
  printf("The program take %f seconds to finish.\n", difftime(t2, t1)); 
  printf("The duration of the process take: %ld (1/100 secs)\n", clock());

  return 0;
}
