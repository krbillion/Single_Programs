#include<stdio.h>

/* not Working correctly
   last row gives 10 stars */

void main(){
  int row_count = 5;
  for(int i = 1; i <= row_count; i++){
    for (int k = 0; k < i; k++) {
      printf("*");
    }
    for (int j = (row_count * 2) - 1 - (i * 2); j >= 1; j--) {
      printf(" ");
    }
    for (int k = 0; k < i; k++) {
      printf("*");
    }
    printf("\n");
  }
}
