/* write a c program to calculate the area of circle,ractange,squar,and triangle based on the 
user choice using switch case */
#include <stdio.h>
#define PI 3.14159
int main() {
    int choice;
    float radius, length, width, base, height;
    float area;

    printf("1. Circle\n2. Rectangle\n3. Square\n4. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of the circle is: %.2f\n", area);
            break;
        case 2:
            printf("Enter length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("Area of the rectangle is: %.2f\n", area);
            break;
        case 3:
            printf("Enter side of the square: ");
            scanf("%f", &length);
            area = length * length;
            printf("Area of the square is: %.2f\n", area);
            break;
        case 4:
            printf("Enter base of the triangle: ");
            scanf("%f", &base);
            printf("Enter height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("Area of the triangle is: %.2f\n", area);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}