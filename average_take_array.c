#include <stdio.h>

int main() {
    int num[10], i, n, sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("Please enter a valid number of elements between 1 and 10.\n");
        return 1; // Exit with an error code
    }

    for (i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
        sum += num[i];
    }

    avg = sum / n;

    printf("Average = %d\n", avg);

    return 0;
}
