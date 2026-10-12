/* Write a program to determine whether a student is eligible for admission based on marks in 
different subjects using nested if-else statements */
#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks out of 500: ");
    scanf("%d", &marks);
    if (marks >= 135) {
        printf("The student is eligible for admission\n");
    } else {
        printf("The student is not eligible for admission\n");
    }
    return 0;
}