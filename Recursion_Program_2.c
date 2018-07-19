/* multiplication table using Recursion */

#include <stdio.h>

int multiplication(int a, int b){
  if (b>10) {
    return 1;
  }
  printf("%d\n",a*b);
  multiplication(a,b+1);
}

void main(){
  multiplication(5,1);
}
