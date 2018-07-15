#include<stdio.h>

void main(){
  int row_count = 5;
  for (int i = 1; i <= row_count; i++) {
    for (int j = 0; j <= row_count-i; j++) {
      printf("*");
    }
    printf("\n");
  }
}
