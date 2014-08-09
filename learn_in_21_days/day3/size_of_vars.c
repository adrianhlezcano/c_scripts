#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned char uc = 'A';
  signed char sc = 'A';
  unsigned short us = 1;
  signed short ss = 1;
  unsigned int ui = 10;
  signed int si = 10;
  unsigned long ul = 100;
  signed long sl = 100;
  float fl = 10.10;
  double dou = 10.100D;

  printf("size of unsigned char: %d\n", sizeof(uc));
  printf("size of signed char: %d\n", sizeof(sc));
  printf("size of unsigned short: %d\n", sizeof(us));
  printf("size of signed short: %d\n", sizeof(ss));
  printf("size of unsigned int: %d\n", sizeof(ui));
  printf("size of signed int: %d\n", sizeof(si));
  printf("size of unsigned long: %d\n", sizeof(ul));
  printf("size of signed long: %d\n", sizeof(sl));
  printf("size of float: %d\n", sizeof(fl));
  printf("size of double: %d\n", sizeof(dou));
  return 0;
}
