// Write a recursive function named calculateGCD that takes two integers a and b as input and returns their greatest common divisor (GCD).
#include <stdio.h>
int calculateGCD(int a, int b) {
    if (b == 0) {
        return a; 
    }
    return calculateGCD(b, a % b); 
}
int main() {
    int no1, n02;

    printf("Enter twonumbers ");
    scanf("%d %d", & no1, &n02);
    if (no1 < 1 || n02 < 1) {
        printf("Error\n");
        return 1;
    }

    int gcd = calculateGCD(no1, n02);
    printf("The GCD of %d and %d is %d\n", no1, n02, gcd);

    return 0;
}
