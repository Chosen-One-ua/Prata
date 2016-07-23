#include <iostream>
#include <string>

int main ()
{
    std::string word;
    char ch;
    int countWord {};
    int i {};
    bool isDone {false};
    std::cout << "Enter words (to stop, type the word done):\n";
    while (!isDone) {
        while (std::cin.get (ch) && isalnum (ch)) {
            word += ch;
        }                       
        if (word.length ()) {
            if (word != "done") {
                ++countWord;
                word.clear();
            } else {
                isDone = true;
            }
        }
    }
    std::cout << "\n\nYou entered a total of " << countWord << " words.\n\n";
}