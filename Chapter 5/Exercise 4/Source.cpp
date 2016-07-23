#include <iostream>

int main ()
{
    double firstDaphneInvest {100.0};
    double balanceDaphne {100.0}, balanceCleo {100.0};
    double interestDaphne {0.1}, interestCleo {0.05};
    int year {};
    while (balanceDaphne >= balanceCleo) { 
        balanceDaphne += firstDaphneInvest * interestDaphne;
        balanceCleo *= interestCleo + 1.0;
        std::cout << "\nYear " << ++year;
        std::cout << "\tBalanceDaphne = " << balanceDaphne;
        std::cout << "\tbalanceCleo = " << balanceCleo;
    }
}