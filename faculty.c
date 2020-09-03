#include <stdio.h>

int main (void) {
  int i, n;
  int e = 1;

  printf("FACULTY \n");
  printf("Value for n: ");
  scanf("%i", &n);

  for(i=1; i <= n; ++i){
    e = e * i;
  }

  printf("%i! = %i", n, e);
  return 0;
}
