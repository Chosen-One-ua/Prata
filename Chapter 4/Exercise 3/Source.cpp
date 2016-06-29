#include <iostream> 
#include <cstring>

int main()
{
    using namespace std;

    char firstName[20] {}, lastName[20] {}, fullName[39] {};

    cout << "Enter your first name: ";
    cin.getline(firstName, 19);
    cout << "Enter your last name : ";
    cin.getline(lastName, 19);
    
    strcpy_s(fullName, firstName);
    strncat_s(fullName, ", ", 2);
    strcat_s(fullName, lastName);

    cout << "Here's the information in a single string: " << fullName << ".\n\n";
    
    return 0;
}