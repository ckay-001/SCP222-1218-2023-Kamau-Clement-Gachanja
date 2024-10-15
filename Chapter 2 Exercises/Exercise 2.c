#include <stdio.h>

int main(void) {
    int start, end, increment;
    float kilograms, pounds;

    // Prompt user for starting, ending, and increment values
    printf("Enter the starting pounds value: ");
    scanf("%d", &start);

    printf("Enter the ending pounds value: ");
    scanf("%d", &end);

    printf("Enter the increment value: ");
    scanf("%d", &increment);

    // Print the heading for the table
    printf("\nPounds to Kilograms Conversion Table:\n");
    printf("--------------------------------------------------\n");
    printf("Pounds\tKilograms\n");
    printf("--------------------------------------------------\n");

    // Generate the table based on user input
    for (pounds = start; pounds <= end; pounds += increment) {
        kilograms = pounds * 0.453592;  // Conversion formula
        printf("%10.1f\t%7.3f\n", pounds, kilograms);
    }

    return 0;
}
