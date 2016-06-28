#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    cout << "Enter the world's population: ";
    long long populationWorld {0};
    cin >> populationWorld;
    cout << "\nEnter the population of the US: ";
    long long populationUS {0};
    cin >> populationUS;
    cout << "The population of the US is " << 1.0 * populationUS / populationWorld * 100
        << "% of the world population.\n\n";
    return 0;
}
