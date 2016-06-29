#include <iostream> 
#include <array>

int main()
{
    using namespace std;

    array<double, 3> results {};

    cout << "Enter first result : ";
    (cin >> results[0]).get();
    cout << "Enter second result : ";
    (cin >> results[1]).get();
    cout << "Enter third result : ";
    (cin >> results[2]).get();

    cout << "First : " << results[0] << endl;
    cout << "Second : " << results[1] << endl;
    cout << "Third : " << results[2] << endl;
    cout << "Average : " << (results.at(0) + results.at(1) + results.at(2)) / 3;

    return 0;
}