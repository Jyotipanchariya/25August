#include <stdio.h>

// Function to convert from Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Function to convert from Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float temperature;
    int value;

    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your value (1/2): ");
    scanf("%d", &value);

    if (value == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        float celsius = fahrenheitToCelsius(temperature);
        printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", temperature, celsius);
    } else if (value == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        float fahrenheit = celsiusToFahrenheit(temperature);
        printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", temperature, fahrenheit);
    } else {
        printf("Invalid value. Please enter 1 or 2.\n");
    }

    return 0;
}

