// Implement a C program to count the occurrence of a specific character in a string.
#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("The character '%c' appears %d time(s).\n", ch, count);

    return 0;
}
