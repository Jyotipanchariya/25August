#include <stdio.h>

int main() {
    int marks;
    float percentage;

    // Input the student's marks
    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    // Calculate the percentage
    percentage = (float)marks / 5; // Assuming each mark is out of 5

    // Determine the grade based on the percentage
    char grade;

    if (percentage < 25) {
        grade = 'F';
    } else if (percentage >= 25 && percentage < 45) {
        grade = 'E';
    } else if (percentage >= 45 && percentage < 50) {
        grade = 'D';
    } else if (percentage >= 50 && percentage < 60) {
        grade = 'C';
    } else if (percentage >= 60 && percentage <= 80) {
        grade = 'B';
    } else {
        grade = 'A';
    }

    // Display the percentage and grade
    printf("Percentage: %.2f%%\n", percentage * 20); // Since each mark is out of 5
    printf("Grade: %c\n", grade);

    return 0;
}

