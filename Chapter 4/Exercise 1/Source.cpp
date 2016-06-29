#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    char firstName[20] {};
    char lastName[20] {};
    char letter {};
    int age {};
    
    cout << "What is your first name ? ";
    cin.getline(firstName, 19);
    cout << "What is your last name ? ";
    cin.getline(lastName, 19);
    cout << "What letter grade do you deserve ? ";
    cin >> letter;
    cout << "What is your age ? ";
    cin >> age; 

    cout << "Name : " << firstName << ", " << lastName << endl;
    cout << "Grade : " << ++letter << endl;
    cout << "Age : " << age << endl;

    return 0;
}
