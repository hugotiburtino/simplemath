#include <stdio.h>

int main (void) {
  int n, e;
  printf("Give a value for n: ");
  scanf("%i", &n);
  e = n * (n + 1) / 2;
  printf("Result from Gauss formel: %i", e);
  return 0;
}
