#include <stdio.h>

int main() {
    int firstnumber;
    printf("Enter the first number: ");
    scanf("%d", &firstnumber);
    
    int currentNumber = 3; 
    while (currentNumber <= firstnumber) {
        printf("%d\n", currentNumber);
        currentNumber++; 
    }
    
    return 0;
}

