#include<stdio.h>

int logg(char *s);

int main(void){
  char *s = NULL;
  int l = logg(s);
  printf("function result is %d\n", l);
  return 0;
}
int logg(char *s){
  if (s == NULL){
    fprintf(stderr, "%s: received null pointer argument", __func__);
    return -1;
  }
  return 1;
}
