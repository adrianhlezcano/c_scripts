#include <stdio.h>

int main(){
  int enteros[10], i;
  float flotantes[10];
  double decimales[10];

  puts("\t\t\tEnteros\t\tFlotantes\t\tDecimales");
  for(i = 0; i < 10; i++){
    printf("Elemento[%d]:\t%ld\t\t%ld\t\t%ld\n", i, &enteros[i], &flotantes[i], &decimales[i]);
  }
  return 0;
}
