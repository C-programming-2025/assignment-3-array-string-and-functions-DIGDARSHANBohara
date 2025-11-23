// Write a C program to find the maximum and minimum elements in an array.
#include <stdio.h>

int main() {
    int mynumbers[] = {10, 20, 30, 40};
    int n = sizeof(mynumbers) / sizeof(mynumbers[0]);  

    int max = mynumbers[0];
    int min = mynumbers[0];

    for (int i = 1; i < n; i++) {
        if (mynumbers[i] > max) {
            max = mynumbers[i];
        }
        if (mynumbers[i] < min) {
            min = mynumbers[i];
        }
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;

}