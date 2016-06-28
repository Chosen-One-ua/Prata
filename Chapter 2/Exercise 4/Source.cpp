#include <iostream>

int yearToMonth(int);

int main()
{
    using std::cout;
    using std::cin;
    cout << "Enter your age: ";
    int age {0};
    cin >> age;
    cout << "Your age in months is " << yearToMonth(age) << ".\n\n";
    return 0;
}

int yearToMonth(int year)
{
    return year * 12;
}
