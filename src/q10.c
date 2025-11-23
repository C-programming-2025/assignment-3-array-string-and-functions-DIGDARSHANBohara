// Write a C program to concatenate two strings without using the built-in string functions.
#include <stdio.h>

int main() {
    char str1[200];
    char str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%199s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}
