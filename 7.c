#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copy[100], concat[200];
    int length, cmp, position;
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    // Finding length of str1
    length = strlen(str1);
    printf("Length of the first string is: %d\n", length);
    
    // Copying str1 to copy
    strcpy(copy, str1);
    printf("Copied string: %s\n", copy);
    
    // Concatenating str1 and str2
    strcat(concat, str1);
    strcat(concat, str2);
    printf("Concatenated string: %s\n", concat);
    
    // Comparing str1 and str2
    cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("Strings are equal\n");
    } else if (cmp < 0) {
        printf("First string is less than second string\n");
    } else {
        printf("First string is greater than second string\n");
    }
    
    // Searching for a substring in str1
    printf("Enter a substring to search in the first string: ");
    scanf("%s", str2);
    char* found = strstr(str1, str2);
    if (found != NULL) {
        position = found - str1;
        printf("Substring found at position: %d\n", position);
    } else {
        printf("Substring not found\n");
    }
    
    return 0;
}
