#include <stdio.h>

void swap(void *ptr1, void *ptr2, size_t size) {
    char temp[size];
    char *bytePtr1 = (char *)ptr1;
    char *bytePtr2 = (char *)ptr2;
    
    for (size_t i = 0; i < size; i++) {
        temp[i] = bytePtr1[i];
        bytePtr1[i] = bytePtr2[i];
        bytePtr2[i] = temp[i];
    }
}

int main() {
    int number1 = 5, number2 = 10;
    printf("Before swap: number1 = %d, number2 = %d\n", number1, number2);
    
    swap(&number1, &number2, sizeof(int));
    
    printf("After swap: number1 = %d, number2 = %d\n", number1, number2);
    
    double value1 = 3.14, value2 = 2.71;
    printf("Before swap: value1 = %lf, value2 = %lf\n", value1, value2);
    
    swap(&value1, &value2, sizeof(double));
    
    printf("After swap: value1 = %lf, value2 = %lf\n", value1, value2);
    
    return 0;
}
