#include <iostream>

int main ()
{
    int row;
    std::cout << "Enter number of rows: ";
    std::cin >> row;
    for (int i {}; i < row; ++i) {
        for (int j {}; j < row; ++j) {
            if (j < row - i - 1) {
                std::cout << '.';
            } else {
                std::cout << '*';
            }
        }
        std::cout << std::endl;
    }

}
