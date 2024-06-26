#include <iostream>
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double temperatureCelsius, temperatureFahrenheit;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> temperatureCelsius;
    temperatureFahrenheit = celsiusToFahrenheit(temperatureCelsius);
    std::cout << "Temperature in Fahrenheit: " << temperatureFahrenheit << std::endl;
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> temperatureFahrenheit;
    temperatureCelsius = fahrenheitToCelsius(temperatureFahrenheit);
    std::cout << "Temperature in Celsius: " << temperatureCelsius << std::endl;

    return 0;
}
