#include <stdio.h>
int calculateFibonacci(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    }
    return calculateFibonacci(n - 1) + calculateFibonacci(n - 2); 
}
int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    int result = calculateFibonacci(n);
    printf("The %dth Fibonacci number is %d\n", n, result);

    return 0;
}