#include <stdio.h>
#include <math.h>

int main (void) {
  float a, b, c, D, x1, x2;

  printf("Value for a: ");
  scanf("%f", &a);
  printf("Value for b: ");
  scanf("%f", &b);
  printf("Value for c: ");
  scanf("%f", &c);
  printf("---------------------\n");

  D = b * b - 4 * a * c;

  if (D < 0) {
    printf("The equation (%.2f) * x^2 + (%.2f) * x + (%.2f) = 0 doesn't have real number solution", a, b, c);
  }

  else if (D < 0.00001 && D > -0.00001) {
    x1 = -b / 2 * a;
    printf("The equation (%.2f) * x^2 + (%.2f) * x + (%.2f) = 0 has two doble solution: x1 = %.2f, x2 = - %.2f", a, b, c, x1, x1);
  }

  else {
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);
    printf("The equation (%.2f) * x^2 + (%.2f) * x + (%.2f) = 0  has two solutions : x1 = %.2f, x2 = %.2f", a, b, c, x1, x2);
  }
    return 0;
}
