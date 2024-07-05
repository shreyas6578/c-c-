#include <stdio.h>
int main() {
    // Example array
    int arr[] = {5, 2, 8, 3, 1, 7, 9, 4};
    // Calculate array size
    int size = sizeof(arr) / sizeof(arr[0]);
    // Element to search for
    int key = 7;
    // Perform linear search
    int index = -1;  // Initialize index to -1 (not found)
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            index = i;  // Update index if the key is found
            break;      // Exit the loop once the key is found
        }
    }
    // Display the result
    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}
