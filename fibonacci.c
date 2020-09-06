#include <stdio.h>

int main (void) {
  int n;
  unsigned long fn, f1 = 0, f2 = 1;

  printf("Give a value for n: ");
  scanf("%i", &n);

  for(int i=1; i < n; ++i){
      fn = f1 + f2;
      f1 = f2;
      f2 = fn;
    }

  printf("Fib(%i) = %lu", n, fn);
  return 0;
}
