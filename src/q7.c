// Implement a C program to reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int i, j;
    char temp;

    printf("Enter a string: ");
    scanf("%99s", str);   

    while (str[length] != '\0') {
        length++;
    }

    i = 0;
    j = length - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
