#include <iostream>
using namespace std;

void fromCelsius(double temp) {
    double fahrenheit = (temp * 9/5) + 32;
    double kelvin = temp + 273.15;
    cout << temp << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit and " << kelvin << " Kelvin.\n";
}

void fromFahrenheit(double temp) {
    double celsius = (temp - 32) * 5/9;
    double kelvin = (temp - 32) * 5/9 + 273.15;
    cout << temp << " degrees Fahrenheit is " << celsius << " degrees Celsius and " << kelvin << " Kelvin.\n";
}

void fromKelvin(double temp) {
    double celsius = temp - 273.15;
    double fahrenheit = (temp - 273.15) * 9/5 + 32;
    cout << temp << " Kelvin is " << celsius << " degrees Celsius and " << fahrenheit << " degrees Fahrenheit.\n";
}

int main() {
    double temperature;
    int choice;
    cout << "Enter the temperature value: ";
    cin >> temperature;
    cout << "Select the original unit of measurement:\n";
    cout << "1. Celsius\n";
    cout << "2. Fahrenheit\n";
    cout << "3. Kelvin\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;
    switch (choice) {
        case 1:
            fromCelsius(temperature);
            break;
        case 2:
            fromFahrenheit(temperature);
            break;
        case 3:
            fromKelvin(temperature);
            break;
        default:
            cout << "Invalid choice! Please select 1, 2, or 3.\n";
            break;
    }
    return 0;
}
