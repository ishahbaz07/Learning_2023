#include <stdio.h>

char calculateGrade(int marks) {
    if (marks >= 90 && marks <= 100) {
        return 'A';
    } else if (marks >= 75 && marks <= 89) {
        return 'B';
    } else if (marks >= 60 && marks <= 74) {
        return 'C';
    } else if (marks >= 50 && marks <= 59) {
        return 'D';
    } else if (marks >= 0 && marks <= 49) {
        return 'F';
    } else {
        return 'I'; // 'I' represents an invalid grade
    }
}

int main() {
    int marks;

    printf("Please enter the marks obtained by the student: ");
    scanf("%d", &marks);

    char grade = calculateGrade(marks);

    if (grade == 'I') {
        printf("Invalid marks entered!\n");
    } else {
        printf("The student's grade is: %c\n", grade);
    }

    return 0;
}
