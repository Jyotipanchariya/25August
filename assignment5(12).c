#include <stdio.h>

int main() {
    char gender;

    printf("Please enter your gender (M for Male, F for Female, T for Transgender): ");
    scanf(" %c", &gender);

    if (gender == 'M' || gender == 'm') {
        printf("You are Male.\n");
    } else if (gender == 'F' || gender == 'f') {
        printf("You are Female.\n");
    } else if (gender == 'T' || gender == 't') {
        printf("You are Transgender.\n");
    } else {
        printf("Invalid input. Please enter 'M' for Male, 'F' for Female, or 'T' for Transgender.\n");
    }

    return 0;
}

