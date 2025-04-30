#include <stdio.h>

int main() {

  int e, i, times, factorial = 1, times2, sum = 0;

  printf("Enter a positive number: ");
  scanf("%d", &times);

  for (i = 1; i < times + 1; ++i) {
    sum += i;
    }

    printf("The sum of %d: %d ", times, sum);
    printf("\nEnter a positive number: ");
    scanf("%d", &times2);
    
   for (e = 1; e < times2 + 1; ++e) {
    factorial *= e;
  }
    printf("Factorial of %d: %d ", times2,factorial);
}