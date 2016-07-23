#include <iostream>
#include <string>

int main ()
{
    const int CountMonths {12};
    std::string  months [CountMonths] {"January", "Fabruary", "March", "May", "June",
        "April", "July", "August", "September", "October", "November", "December"};
    int numberBooks [CountMonths] {}, sum {};
    for (int i {}; i < CountMonths; ++i) {
        std::cout << "\nEnter number books that sales in " << months [i] << "\t:";
        std::cin >> numberBooks [i];
        sum += numberBooks [i];
    }
    std::cout << "\n\nTotal sales : " << sum;
}