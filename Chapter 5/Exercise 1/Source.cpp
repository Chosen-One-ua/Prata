#include <iostream>

int main ()
{
    using std::cout;
    using std::cin;
    int min {}, max {}, sum {};
    cout << "Enter smaller number : ";
    cin >> min;
    cout << "Enter larger number : ";
    cin >> max;
    for (int i {min}; i <= max; ++i) {
        sum += i;
    }
    cout << "Sum = " << sum << "\n\n";
}