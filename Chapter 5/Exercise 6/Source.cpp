#include <iostream>
#include <string>

int main ()
{
    const int CountMonths {12};
    const int Years {3};
    std::string  months [CountMonths] {"January", "Fabruary", "March", "May", "June",
        "April", "July", "August", "September", "October", "November", "December"};
    int numberBooks [CountMonths] [Years] {}, sum {};
    for (int j {0}; j < Years; ++j) {
        sum = 0;
        for (int i {}; i < CountMonths; ++i) {
            std::cout << "\nEnter number books that sales in " << months [i] <<
                " " << j << "\t:";
            std::cin >> numberBooks [i][j];
            sum += numberBooks [i][j];
        }
        std::cout << "\n\nTotal sales in " << j << " yaer : " << sum;
    }
    sum = 0;
    for (int i {}; i < CountMonths * Years; ++i) {
        sum += numberBooks [0][i];
    }
    std::cout << "\n\nTotal sales : " << sum;
}