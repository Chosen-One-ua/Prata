#include <iostream>
using std::cout;

void outputStr1();
void outputStr2();

int main()
{
    outputStr1();
    outputStr1();
    outputStr2();
    outputStr2();
    return 0;
}

void outputStr1()
{
    cout << "Three blind mice\n";
}

void outputStr2()
{
    cout << "See how they run\n";
}