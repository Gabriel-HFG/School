#include <stdio.h>
#include <math.h>

int main() {
  double base, exponent, result;

  printf("Enter the base: "); scanf("%lf", &base);
  printf("Enter the exponent: "); scanf("%lf", &exponent);
  result = pow(base, exponent);
  printf("%.2lf to the power of %.2lf is: %.2lf\n", base, exponent, result); //formats to 2 decimal places
}