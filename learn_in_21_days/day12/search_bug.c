#include <stdio.h>

int main(){
  int x;
  static int total = 0;

  for (x=1; x<100; x++){
    if ((x % 2) == 0){
      total++;
    }
  }
  int y;
  for(y = 0; y < 10; y++){
    printf("%d ", y);
  }
  
  printf("The number of even from 0 to 100 are: %d number\n", total);
  return 0;
}
