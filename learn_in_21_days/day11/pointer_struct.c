#include<stdio.h>
#include<stdlib.h>

struct point {
  int x;
  int y;
};
void print_point(struct point *p);

int main(void){
  struct point screen;
  struct point *p_screen;
  p_screen = &screen;

  puts("Enter a point for the coordinate (x, y)");
  printf("E.g: 12, 12 => ");
  scanf("%d %d", &screen.x, &screen.y);

  print_point(p_screen);
  return 0;

}

void print_point(struct point *p){
  // printf("Point (x, y) = (%d, %d)\n", (*p).x, (*p).y);
  printf("Point (x, y) = (%d, %d)\n", p->x, p->y);
}
