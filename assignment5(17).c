#include <stdio.h>

int main() {
    int heightCM;
    float heightM;

    // Input the height in centimeters
    printf("Enter the height in centimeters: ");
    scanf("%d", &heightCM);

    // Check if height is greater than or equal to 500 cm
    if (heightCM >= 500) {
        // Convert height to meters
        heightM = (float)heightCM / 100.0;

        // Categorize the person based on height in meters
        if (heightM < 1.5) {
            printf("Category: Low\n");
        } else if (heightM >= 1.5 && heightM < 1.8) {
            printf("Category: Mid\n");
        } else {
            printf("Category: High\n");
        }
    } else {
        printf("Category: Low\n");
    }

    return 0;
}

