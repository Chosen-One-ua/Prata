#include <iostream>

using std::cout;
using std::cin;

void showTime(int, int);

int main()
{
    cout << "Enter the number of hours: ";
    int hour {0};
    cin >> hour;
    cout << "Enter the number of minutes: ";
    int minute {0};
    cin >> minute;
    showTime(hour, minute);
    return 0;
}

void showTime(int hour, int minute)
{
    cout << "\nTime: " << hour << ":" << minute << "\n\n";
}

