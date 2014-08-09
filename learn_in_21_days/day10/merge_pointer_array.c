#include<stdio.h>
#include<stdlib.h>

int main(void){
  char nombre[50];
  char *p_nombre;

  p_nombre = malloc(50 * sizeof(char));
  printf("Enter your name: ");
  p_nombre = gets(nombre);

  printf("Hello %s\n", nombre); 
  return 0;
}
