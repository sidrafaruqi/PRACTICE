#include <stdio.h>

int main() {
    int arr[5] = {5, 5, 5, 5, 5};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    if (n > 0) {
        int avg = sum / n;
        printf("Average = %d\n", avg);
    } else {
        printf("Array is empty, cannot calculate the average.\n");
    }

    return 0;
}
