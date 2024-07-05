#include <stdio.h>
int main() {
    int n, sum = 0;
    // Accept input for the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);
    // Compute the sum of squares of n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    // Print the result
    printf("The sum of squares of %d natural numbers is: %d\n", n, sum);
    return 0;
}
