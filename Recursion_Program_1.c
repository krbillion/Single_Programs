/* Recursion: A function calling itself.
    1. Base Case [End Call]
    2. The call has to converge to the base case. */

/* print 10 numbers */
#include <stdio.h>
int add(int n){
  if (n>10) {
    return 1;
  }
  printf("%d ",n);
  add(n+1);
}

void main(){
  add(1);
}
