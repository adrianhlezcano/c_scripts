#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sleep(int nbr_seconds);

int main(void){
  int x;
  int wait = 13;

  /* Pause for a number of seconds. Print a *
  * dot each second waited.                 */
  printf("Delay for %d seconds\n", wait);
  printf(">");

  for(x=1; x<=wait; x++){
    printf(".");
    fflush(stdout);
    sleep((int) 1);
  }

  printf("Done!\n");
  return 0;
}

void sleep(int nbr_seconds){
  clock_t goal;
  goal = (nbr_seconds * CLOCKS_PER_SEC) + clock();
  while(goal > clock()){
    ; // loop
  }
}
