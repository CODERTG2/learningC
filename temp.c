#include <stdio.h>

int c_to_f(float celsius) {
    return (celsius * 9/5) + 32;
}

int f_to_c(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    printf("type 1 for C to F or 2 for F to C: ");
    char choice[2];
    scanf("%s", choice);
    if (strcmp(choice, "1") == 0) {
        float celsius;
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        float fahrenheit = c_to_f(celsius);
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else if (choice == "2") {
        float fahrenheit;
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        float celsius = f_to_c(fahrenheit);
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}