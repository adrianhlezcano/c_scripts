#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *get_legend(int comp_result);

int main(void){
  char str1[80];
  char str2[80];

  while(1){
    printf("Enter the first string (just enter to exit): ");
    gets(str1);

    if (!strlen(str1)){
      break;
    }
    printf("Enter the second string (just enter to exit): ");
    gets(str2);

    int full_result = strcmp(str1, str2);
    int partial_result = strncmp(str1, str2, 1);
    int case_result = strcasecmp(str1, str2);
    printf("\nComparison result between %s and %s is: %d\n", str1, str2, full_result);
    printf("Comparing the first letter: %s\n", get_legend(partial_result));
    printf("Comparison without case sensitive: %s\n\n", get_legend(case_result));
  } 
  return 0;
}

char *get_legend(int comp_result){
  if (comp_result == 0){
    return "Equals";
  }
  return ( comp_result > 0 ? "Greater" : "Less");
}
