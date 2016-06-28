#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    const int InchesPerFoot {12};
    const double MetersPerInche {0.0254};
    const double PoundsPerKilogram {2.2};

    cout << "Input feet: ";
    int foot {0};
    cin >> foot;
    cout << "Input inches: ";
    int inche {0};
    cin >> inche;
    cout << "Input pounds: ";
    double pound {0.0};
    cin >> pound;
    double height {(foot * InchesPerFoot + inche) * MetersPerInche};
    double mass {pound / PoundsPerKilogram};
    double bmi {mass / (height * height)};
    cout << "Your BMI is " << bmi << ".\n\n";
    return 0;
}
