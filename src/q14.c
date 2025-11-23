// Write a function named convertTemperature that takes a temperature value in Celsius and converts it to Fahrenheit. The function should return the converted temperature.
#include <stdio.h>

double convertTemperature(double celsius) {
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    return fahrenheit;
}

int main() {
    double c, f;
    scanf("%lf", &c);

    f = convertTemperature(c);
    printf("%.2f\n", f);

    return 0;
}
