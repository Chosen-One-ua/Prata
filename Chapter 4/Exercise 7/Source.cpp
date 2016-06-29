#include <iostream> 

int main()
{
    using namespace std;

    struct Pizza
    {
        char company[20];
        int diameter;
        float weight;
    };

    Pizza pizza;

    cout << "Input name of company : ";
    cin.getline(pizza.company, 19);
    cout << "Enter diameter of pizza : ";
    cin >> pizza.diameter;
    cout << "Enter weight of pizza : ";
    cin >> pizza.weight;
                         
    cout << "Name : " << pizza.company << endl;
    cout << "Weight : " << pizza.weight << endl;
    cout << "Diameter : " << pizza.diameter << endl;

    return 0;
}