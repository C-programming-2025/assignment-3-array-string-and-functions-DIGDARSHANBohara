// Write a function named findFactorial that takes an integer as input and returns its factorial.
#include <stdio.h>

long long findFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    scanf("%d", &n);

    long long result = findFactorial(n);
    printf("%lld\n", result);

    return 0;
}
