#include <stdio.h>
int factorial(int n);
int main() {
  int result = factorial(5); // Change the argument to the desired number
  printf("Factorial: %d\n", result);
  return 0;
}
int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
