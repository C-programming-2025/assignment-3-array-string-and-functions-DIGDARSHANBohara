//  Write a function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.
#include <stdio.h>

double calculateAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

int main() {
    int numbers[] = {10, 20, 30, 40};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    double avg = calculateAverage(numbers, n);
    printf("Average = %.2f\n", avg);

    return 0;
}
