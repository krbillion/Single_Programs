#include<stdio.h>

/* Not Working
   Need To Fix

   1
   2 6
   3 7 10
   4 8 11 13
   5 9 12 14 15  */

void main(){
  int row_count = 5;
  for (int i = 1; i <= row_count; i++) {
    int k = row_count - 1;
    for (int j = 1; j <= i; j++) {
      int result = i + (j - 1) * k;
      printf("%d ", result);
      k--;
    }
    printf("\n");
  }
}
