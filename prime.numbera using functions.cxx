#include <stdio.h>
#include <math.h>

int is_prime(int n) {
  int i, sqrt_n;
  if (n <= 1) {
    return 0;
  }
  sqrt_n = (int) sqrt(n);
  for (i = 2; i <= sqrt_n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int low, high, i;
  printf("Enter two numbers: ");
  scanf("%d %d", &low, &high);
  printf("Prime numbers between %d and %d are: ", low, high);
  for (i = low + 1; i < high; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }
  return 0;
}
