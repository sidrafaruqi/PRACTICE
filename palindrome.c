#include <stdio.h>


int main() {
    int n, reverse_num = 0, remainder = 0, original_num = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original_num = n;

    while (n != 0) {
        remainder = n % 10;
        reverse_num = reverse_num * 10 + remainder;
        n = n / 10;
    }

    if (original_num == reverse_num) {
        printf("%d is a palindrome.\n", original_num);
    } else {
        printf("%d is not a palindrome.\n", original_num);
    }

    return 0;
}
