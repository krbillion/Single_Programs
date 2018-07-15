#include<stdio.h>

void main(){
  int row_count = 5;
  for(int i = 1; i <= row_count; i++){
    for (int k = 1; k <= row_count-i; k++) {
      printf(" ");
    }
    for (int j = 1; j<=i*2-1; j++) {
      printf("*");
    }
    printf("\n");
  }
}
