#include <stdio.h>

int main (void) {
  int i, n, f1 = 0, f2 = 1, fn;

  printf("Give a value for n: ");
  scanf("%i", &n);

  for(i=1; i < n; ++i){
      fn = f1 + f2;
      f1 = f2;
      f2 = fn;
    }

  printf("Fib(%i) = %i", n, fn);
  return 0;
}
