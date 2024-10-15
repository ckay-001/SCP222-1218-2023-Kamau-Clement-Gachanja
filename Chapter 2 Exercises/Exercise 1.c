#include <stdio.h>

int main(void) {
    int start, end, increment;
    float celsius, fahrenheit;

    printf("Enter the starting Fahrenheit value: ");
    scanf("%d", &start);

    printf("Enter the ending Fahrenheit value: ");
    scanf("%d", &end);

    printf("Enter the increment value: ");
    scanf("%d", &increment);

    printf("\nFahrenheit to Celsius Conversion Table:\n");
    printf("--------------------------------------------------\n");
    printf("Fahrenheit\tCelsius\n");
    printf("--------------------------------------------------\n");

    for (fahrenheit = start; fahrenheit <= end; fahrenheit += increment) {
        celsius = (fahrenheit - 32) * 5 / 9;  // Conversion formula
        printf("%10.1f\t%7.1f\n", fahrenheit, celsius);
    }

    return 0;
}
