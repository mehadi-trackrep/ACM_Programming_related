#include <iostream>
#include <string>
#include <algorithm>

bool in_quote(const std::string& cont, const std::string& s)
{
    return std::search(cont.begin(), cont.end(), s.begin(), s.end()) != cont.end();
}

int main()
{
    std::string sentence, word;

    std::cout << "Enter sentence:"<< std::endl;
    std::getline(std::cin, sentence);


    std::cout << "Enter word to serch for:"<< std::endl;
    std::cin >> word;

    if (in_quote(sentence, word))
        std::cout << "word is in the sentence";
    else
        std::cout << "word is not in the sentence";
    std::cout << std::endl;

    return 0;
}
