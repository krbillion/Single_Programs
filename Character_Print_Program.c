#include<stdio.h>

void main(){
  int row_count = 4;
  for(int i = 1; i <= row_count; i++){
    for (int j = 0; j < row_count; j++) {
      if (i+j-1 < 4) {
        printf("%c",'A' + i+j-1);
      } else {
        printf("%c", 'A' + i + j - 1 - 4);
      }
    }
    printf("\n");
  }
}
