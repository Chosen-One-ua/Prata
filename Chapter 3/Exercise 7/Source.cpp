#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    cout << "Enter your consumption liters per 100 km = ";
    double consumptionEU {0.0};
    cin >> consumptionEU;
    double consumptionUS {62.14 * 3.875 / consumptionEU};
    cout << "It's " << consumptionUS << " in consumptionUS.\n\n";
    return 0;
}
