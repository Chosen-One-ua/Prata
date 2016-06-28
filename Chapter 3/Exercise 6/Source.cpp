#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    cout << "How many kilometers you drove? ";
    int kilometer {0};
    cin >> kilometer;
    cout << "How many liters you used? ";
    int liter {0};
    cin >> liter;
    cout << "Your consumption is " << 100.0 * liter / kilometer << " per 100 km.\n\n";
    return 0;
}
