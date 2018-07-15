#include<stdio.h>

void main(){
  int row_count = 5;
  for(int i = 1; i <= row_count; i++){
    for (int k = 1; k < i; k++) {
      printf(" ");
    }
    for (int j = (row_count * 2) - (i * 2 - 1); j>=1; j--) {
      printf("*");
    }
    printf("\n");
  }
}
