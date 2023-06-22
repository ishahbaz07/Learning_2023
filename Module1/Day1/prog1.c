#include <stdio.h>

int findLargest(int a, int b) {
    int largest;
    
    if (a > b) {
        largest = a;
    } else {
        largest = b;
    }

    // Alternatively, using the ternary operator
    // largest = (a > b) ? a : b;

    return largest;
}

int main() {
    int number1, number2;

    printf("Please enter the first number: ");
    scanf("%d", &number1);

    printf("Please enter the second number: ");
    scanf("%d", &number2);

    int largestNumber = findLargest(number1, number2);
    printf("The largest number is: %d\n", largestNumber);

    return 0;
}
