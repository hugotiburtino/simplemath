#include <stdio.h>

int gcd(int a, int b) {
  if (b != 0)
    return gcd(b, a % b);
  else
    return a;
}


int lcm(int a, int b, int gcd) {
  int lcm;
  lcm = a * b / gcd;
  return lcm;
}

int main (void) {
  int a, b;

  printf("Number a: ");
  scanf("%i", &a);
  printf("Number b: ");
  scanf("%i", &b);
  
  printf("Greatest Common Divisor: %i\n", gcd(a, b));
  printf("Least Common Multiple: %i", lcm(a, b, gcd(a, b)));

  return 0;
}
