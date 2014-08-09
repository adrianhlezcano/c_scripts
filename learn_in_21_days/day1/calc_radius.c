#include <stdio.h>
#include <stdlib.h>

int main(){
  int radious;
  int area;

  printf("Enter a radious: ");
  scanf("%d", &radious);
  area = (int) 3.14159 * radious * radious;
  printf("Area: %d\n", area);
  
  return 0;
}
