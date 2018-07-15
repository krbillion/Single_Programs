#include<stdio.h>

void main(){
  int row_count = 5;
  for(int i = 0; i < row_count; i++){
    for (int k = 1; k < row_count-i; k++) {
      printf(" ");
    }
    for (int g = i; g >= 0; g--) {
      printf("%d",g);
    }
    for (int j = 1; j <= i; j++) {
      printf("%d",j);
    }
    printf("\n");
  }

}
