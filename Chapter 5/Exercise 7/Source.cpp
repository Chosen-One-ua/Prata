#include <iostream>
#include <string>

struct Car
{
    std::string make;
    int yearMade;
};

int main ()
{
    int countCars {};
    Car* cars;
    std::cout << "How many cars do you wish to catalog? ";
    std::cin >> countCars;
    if (countCars > 0) {
        cars = new Car [countCars];
        for (int i {}; i < countCars; ++i) {
            std::cout << "Car #" << i + 1 << " :" <<
                "\nPlease enter the make : ";
            std::cin >> cars [i].make;
            std::cout << "Please enter the year made : ";
            std::cin >> cars [i].yearMade;
        }
        std::cout << "Here is your collection:";
        for (int i {}; i < countCars; ++i) {
            std::cout << "\n" << cars [i].yearMade << " " << cars [i].make;
        }
    }
}