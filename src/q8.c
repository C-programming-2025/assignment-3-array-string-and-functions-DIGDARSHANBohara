// Write a C program to check if a given string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int i, j;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (str[length] != '\0') {
        length++;
    }

    i = 0;
    j = length - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        printf("is a palindrome.\n");
    } else {
        printf("is not a palindrome.\n");
    }

    return 0;
}
