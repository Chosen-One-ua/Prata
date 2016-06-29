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

    Pizza* pizza = new Pizza;

    cout << "Enter diameter of pizza : ";
    (cin >> pizza->diameter).get();
    cout << "Input name of company : ";
    cin.getline(pizza->company, 19);
    cout << "Enter weight of pizza : ";
    (cin >> pizza->weight).get();

    cout << "Name : " << pizza->company << endl;
    cout << "Weight : " << pizza->weight << endl;
    cout << "Diameter : " << pizza->diameter << endl;

    return 0;
}