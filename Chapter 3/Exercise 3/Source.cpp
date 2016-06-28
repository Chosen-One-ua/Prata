#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    const int SecondsPerMinute {60};
    const int MinutesPerDegree {60};

    cout << "Enter a latitude in degrees, minutes, and seconds:"
        << "\nFirst, enter the degrees: ";
    double degree {0.0};
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    double minute {0.0};
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    double second {0.0};
    cin >> second;
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = ";
    degree += (second / SecondsPerMinute + minute) / MinutesPerDegree;
    cout << degree << " degrees\n\n";
    return 0;
}
