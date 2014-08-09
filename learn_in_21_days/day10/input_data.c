#include <stdio.h>
#include <stdlib.h>

int main(void){
  char *nombre;
  char *apellido;

  nombre = (char *) malloc(50 * sizeof(char));
  apellido = (char *) malloc(50 * sizeof(char));
 
  if (nombre == NULL || apellido == NULL){
    puts("Cannot allocate memory");
    return 1;
  }
  printf("Enter your name: ");
  gets(nombre);
  
  printf("Enter your surname: ");
  gets(apellido);

  printf("Hello %s, %s\n", apellido, nombre);

  char *s1;
  char *s2 = "Sole";
  s1 = s2;
  printf("String %s, %s\n", s1, s2);

  return 0;
}

