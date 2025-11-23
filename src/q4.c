// Implement a C program to find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 50, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

  
    printf("Second largest: %d\n", arr[n - 2]);

    return 0;
}

    
