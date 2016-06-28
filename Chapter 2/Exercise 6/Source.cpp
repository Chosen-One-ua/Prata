#include <iostream>

double lightYearToAstronomicalUnits(double);

int main()
{
    using std::cout;
    using std::cin;

    cout << "Enter the number of light years: ";
    double lightYear {0};
    cin >> lightYear;
    cout << "\n" << lightYear << " light years = "
        << lightYearToAstronomicalUnits(lightYear) << " astronomical units.\n\n";
    return 0;
}

double lightYearToAstronomicalUnits(double year)
{
    return year * 63240;
}