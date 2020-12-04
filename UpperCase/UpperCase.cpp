#include <iostream>
#include <vector>
#include <string>

void ChangeToCapital(char&);
void ChangeToCapital(char& ch) {
    if (ch >= 97 && ch <= 122)
    {
        ch -= 32;
    }
}

int main()
{
    std::cout << "Please type something:";
    std::string sentence;
    std::getline(std::cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        if (i != 0) {
            if (sentence.at(i - 1) == ' ') {
                ChangeToCapital(sentence.at(i));
            }
        }
        else {
            ChangeToCapital(sentence.at(i));
        }
    }
    std::cout << "Updated sentence : " << sentence;
}