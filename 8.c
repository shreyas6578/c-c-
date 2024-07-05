#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    int isPalindrome = 1; // Assume it's a palindrome initially

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Check if the string is a palindrome
    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
