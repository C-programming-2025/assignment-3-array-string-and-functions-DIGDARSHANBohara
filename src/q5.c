// Write a C program to merge two sorted arrays into a single sorted array.
#include <stdio.h>

int main() {
    int arr1[] = {1, 4, 7, 9};
    int arr2[] = {2, 3, 6, 10};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[n1 + n2];

    int i = 0; 
    int j = 0; 
    int k = 0; 

    
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

  
    

   
    

   
    printf("Merged sorted array: ");
    for (int t = 0; t < n1 + n2; t++) {
        printf("%d ", merged[t]);
    }
    printf("\n");

    return 0;
}
