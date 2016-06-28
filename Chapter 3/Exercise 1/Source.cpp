#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    const int InchesPerFoot {12};
    cout << "Input inches: ";
    int inche {0};
    cin >> inche;
    cout << "Height is " << inche / InchesPerFoot
        << " feet and " << inche % InchesPerFoot << " inches.\n\n";
    return 0;
}