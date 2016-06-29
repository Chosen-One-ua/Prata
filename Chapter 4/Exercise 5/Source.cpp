#include <iostream> 

int main()
{
    using namespace std;

    struct CandyBar 
    {
        char name[20];
        float weight;
        int kkal;
    } snack {"Mocha Munch", 2.3, 350};

    cout << "Name : " << snack.name << endl;
    cout << "Weight = " << snack.weight << endl;
    cout << "Kkal = " << snack.kkal << endl;

    return 0;
}