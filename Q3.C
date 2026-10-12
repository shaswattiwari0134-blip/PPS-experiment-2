//Write a program to display grade of a student based on marks using else if ladder
#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 90) {
        printf("Grade: Passed with distinction\n");
    } else if (marks >= 80) {
        printf("Grade: Passed\n");
    } else if (marks >= 70) {
        printf("Grade: Average\n");
    } else if (marks >= 60) {
        printf("Grade: Below Average\n");
    } else {
        printf("Grade: Failed\n");
    }
    return 0;
}