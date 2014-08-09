#include<stdio.h>
#include<stdlib.h>

int main(){
  char buffer[50];
  
  while(1){
    puts("\nEnter a command of your O.S. (just an enter to exit)");
    gets(buffer);
    
    if (buffer[0] == '\0'){
      exit(0);
    }
    system(buffer);
  }
  return 0;
}
