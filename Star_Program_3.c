#include<stdio.h>

void main(){
  int row_count = 5;
  for (int i = 0; i < row_count; i++) {
    for (int j = 0; j < i; j++) {
      printf(" ");
    }
    for (int k = 0; k < row_count-i; k++) {
      printf("*");
    }
    printf("\n");
  }
}
