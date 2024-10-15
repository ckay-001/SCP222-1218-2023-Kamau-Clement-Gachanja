#include <stdio.h>

int main(void) {
    int startF, endF, incrementF;
    float celsius, fahrenheit;

    // Fahrenheit to Celsius conversion
    printf("Fahrenheit to Celsius Conversion Table:\n");
    printf("--------------------------------------------------\n");
    printf("Enter the starting Fahrenheit value: ");
    scanf("%d", &startF);

    printf("Enter the ending Fahrenheit value: ");
    scanf("%d", &endF);

    printf("Enter the increment value: ");
    scanf("%d", &incrementF);

    printf("Fahrenheit\tCelsius\n");
    printf("--------------------------------------------------\n");

    for (fahrenheit = startF; fahrenheit <= endF; fahrenheit += incrementF) {
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%10.1f\t%7.1f\n", fahrenheit, celsius);
    }

    // Pounds to Kilograms conversion
    int startP, endP, incrementP;
    float kilograms, pounds;

    printf("\nPounds to Kilograms Conversion Table:\n");
    printf("--------------------------------------------------\n");
    printf("Enter the starting pounds value: ");
    scanf("%d", &startP);

    printf("Enter the ending pounds value: ");
    scanf("%d", &endP);

    printf("Enter the increment value: ");
    scanf("%d", &incrementP);

    printf("Pounds\tKilograms\n");
    printf("--------------------------------------------------\n");

    for (pounds = startP; pounds <= endP; pounds += incrementP) {
        kilograms = pounds * 0.453592; // Conversion factor
        printf("%10.1f\t%7.3f\n", pounds, kilograms);
    }

    return 0;
}
