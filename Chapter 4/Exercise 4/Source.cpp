#include <iostream> 
#include <string>

int main()
{
    using namespace std;

    string firstName, lastName, fullName;

    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name : ";
    getline(cin, lastName);

    fullName = firstName + ", " + lastName;

    cout << "Here's the information in a single string: " << fullName << ".\n\n";

    return 0;
}