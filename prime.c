#include <stdio.h>

int is_prime(int m);

int FALSE = 0, TRUE = 1;

int main(void) {
  int n;
  printf("Give a natural number: ");
  scanf("%i", &n);
  printf("Prime numbers <= %i: ", n);
  
  for(int i=2; i <= n; ++i) {
    if(is_prime(i) == TRUE)
      printf("%i ", i);
  }

  return 0;
}

int is_prime(int m) {
  int bool = TRUE;
  for(int i = 2; i < m; ++i) {
    if(m % i == 0) {
      bool = FALSE;
      break;
    }
    else
      continue;
  }
  return bool;
}
