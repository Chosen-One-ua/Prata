#include <iostream>

int celsiusToFahrenheit(int);

int main()
{
    using std::cout;
    using std::cin;

    cout << "Please enter a Celsius value: ";
    int celsius {0};
    cin >> celsius;
    cout << "\n" << celsius << " degrees Celsius is "
        << celsiusToFahrenheit(celsius) << " degrees Fahrenheit.\n\n";
    return 0;
}

int celsiusToFahrenheit(int celsius)
{
    return celsius * 1.8 + 32;
}