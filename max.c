#include <stdio.h>

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 9, 2};
    int max = arr[0]; // Initialize max with the first element
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++) { // Start from the second element
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum value in the array: %d\n", max);

    return 0;
}
