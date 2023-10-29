int binary2D(int x) {
    int Decimal = 0;
    int count = 0;

    while (x != 0) {
        int remainder = x % 10;
        int reverse_number = 0;
        reverse_number = reverse_number * 10 + remainder;
        int c = pow(2, count);
        Decimal = Decimal + (reverse_number * c);
        count++;
        x = x / 10;
    }

    return Decimal;
}

int main() {
    int n;
    printf("ENTER YOUR NUMBER: ");
    scanf("%d", &n);
    int decimalValue = binary2D(n);
    printf("Decimal equivalent: %d\n", decimalValue);

    return 0;
}
