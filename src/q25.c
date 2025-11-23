// Write a recursive function named calculateSumOfDigits that takes an integer n as input and returns the sum of its digits.
#include <stdio.h>
int calculateSumOfDigits(int n) {
    return (n % 10) + calculateSumOfDigits(n / 10);
}
int main() {
    int n;
    printf(" a positive integer (n): ");
    scanf("%d", &n);
    if (n < 0) {
        printf(" enter a non-negative integer.\n");
        return 1;
    }

    int result = calculateSumOfDigits(n);
    printf("sum  %d is %d\n", n, result);

    return 0;
}