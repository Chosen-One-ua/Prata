#include <iostream> 

int main()
{
    using namespace std;

    struct CandyBar
    {
        char name[20];
        float weight;
        int kkal;
    };

    CandyBar snacks[3] {
        {"Mocha Munch", 2.3f, 350},
        {"Mars", 1.5f, 400},
        {"Lion", 0.7f, 270}};
                            
    cout << "Name : " << snacks[0].name << endl;
    cout << "Weight = " << snacks[0].weight << endl;
    cout << "Kkal = " << snacks[0].kkal << endl;

    cout << "Name : " << snacks[1].name << endl;
    cout << "Weight = " << snacks[1].weight << endl;
    cout << "Kkal = " << snacks[1].kkal << endl;

    cout << "Name : " << snacks[2].name << endl;
    cout << "Weight = " << snacks[2].weight << endl;
    cout << "Kkal = " << snacks[2].kkal << endl;

    return 0;
}