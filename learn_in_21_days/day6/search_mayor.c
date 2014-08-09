#include <stdio.h>

int get_mayor(int array[], int size);

int main(){
  int array[5];
  int i = 0;

  puts("## Enter Five number ##");
  for(i; i < 5; i++){
    printf("N. %d: ", i);
    scanf("%d", &array[i]);
  }
  for(i=0; i < 5; i++){
    printf("%d, ", array[i]);    
  }
  puts("");
 
  int size_arr = sizeof(array) / sizeof(array[0]);
  int mayor = get_mayor(array, size_arr); 
  printf("The mayor value is: %d.\n", mayor);

  return 0;
}

int get_mayor(int array[], int size){
  int i;
  int result = 0;

  for (i=0; i < size; i++){ 
    if ( array[i] > result){
      result = array[i];
    }
  }
  
  return result;
}
