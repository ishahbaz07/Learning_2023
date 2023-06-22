#include <stdio.h>

void printExponent(double value) {
    unsigned long long *ptr = (unsigned long long *)&value;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    printf("Exponent in hexadecimal: 0x%llx\n", exponent);

    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double number;
    printf("Enter a double value: ");
    scanf("%lf", &number);

    printExponent(number);

    return 0;
}
