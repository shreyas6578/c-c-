#include<stdio.h>											
int main() {
    // Example array
    int arr[] = {5, 2, 8, 3, 1, 7, 9, 4};

    // Calculate array size
    int size = sizeof(arr) / sizeof(arr[0]);

    // Initialize min and max with the first element of the array
    int min = arr[0];
    int max = arr[0];
    int i;
   
    // Traverse the array to find min and max
    for (i = 1; i < size; i++) {
	if(arr[i] < min) {
	    min = arr[i];
	} else if (arr[i] > max) {
	    max = arr[i];
	}
    }

    // Display the results
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

   return 0;
}
