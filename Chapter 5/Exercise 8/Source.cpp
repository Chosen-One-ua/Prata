#include <iostream>
#include <cstring>

int main ()
{
    char word [20] {};
    int countWord {};
    int i {};
    bool isDone {false};
    std::cout << "Enter words (to stop, type the word done):\n";
    while (!isDone) {
        while (std::cin.get (word [i++]) && i < 20 && isalnum (word [i - 1]));
        word [i - 1] = '\0';
        if (strlen (word)) {
            if (strcmp (word, "done")) {
                ++countWord;

            } else {
                isDone = true;
            }
        }
        i = 0;
        word [i] = '\0';
    }
    std::cout << "\n\nYou entered a total of " << countWord << " words.\n\n";
}