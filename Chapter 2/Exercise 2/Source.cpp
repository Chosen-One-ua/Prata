#include <iostream>

int furlongToYard(int);

int main()
{
    using std::cout;
    using std::cin;
    int furlong {0};
    cout << "Input count of furlongs: ";
    cin >> furlong;
    cout << "Its " << furlongToYard(furlong) << " yards.\n\n";
    return 0;
}

int furlongToYard(int furlong)
{
    return furlong * 220;
}