#include <stdio.h>


int fact(int k) {
  if(k > 0) {
    return k + fact(k-1);
  }
  return 0;
}

int main(void) {

  int x,s;
  printf("원하는 값:");
  scanf("%d", &x);

s = fact(x);
  printf("%d", s);

  return 0;
}