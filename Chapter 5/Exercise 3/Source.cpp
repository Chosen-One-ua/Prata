#include <iostream>

int main ()
{
    int number {1}, sum {};
    while (std::cin >> number && number) {
        sum += number;
        std::cout << "Sum = " << sum << std::endl;
    }
    std::cout << "Sum = " << sum;
}
