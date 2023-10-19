#include <stdio.h>
#include <math.h>

int main() {
    char shape;
    char measurement;

    printf("Enter the shape (t for triangle, s for square, r for rectangle): ");
    scanf(" %c", &shape);

    printf("Enter the measurement type (a for area, v for volume): ");
    scanf(" %c", &measurement);

    if (shape == 's') {
        if (measurement == 'a') {
            double side;
            printf("Enter the side length of the square: ");
            scanf("%lf", &side);

            if (side <= 0) {
                printf("Invalid input for square side length.\n");
            } else {
                double area = side * side;
                printf("Area of the square is %.2lf square units.\n", area);
            }
        } else {
            printf("Invalid measurement type. Please enter 'a' for area.\n");
        }
    } else if (shape == 't') {
        if (measurement == 'a') {
            double base, height;
            printf("Enter the base and height of the triangle (separated by spaces): ");
            scanf("%lf %lf", &base, &height);

            if (base <= 0 || height <= 0) {
                printf("Invalid input for triangle base or height.\n");
            } else {
                double area = 0.5 * base * height;
                printf("Area of the triangle is %.2lf square units.\n", area);
            }
        } else {
            printf("Invalid measurement type. Please enter 'a' for area.\n");
        }
    } else if (shape == 'r') {
        if (measurement == 'a') {
            double length, width;
            printf("Enter the length and width of the rectangle (separated by spaces): ");
            scanf("%lf %lf", &length, &width);

            if (length <= 0 || width <= 0) {
                printf("Invalid input for rectangle length or width.\n");
            } else {
                double area = length * width;
                printf("Area of the rectangle is %.2lf square units.\n", area);
            }
        } else {
            printf("Invalid measurement type. Please enter 'a' for area.\n");
        }
    } else {
        printf("Invalid shape entered. Please enter 's' for square, 't' for triangle, or 'r' for rectangle.\n");
    }

    return 0;
}

