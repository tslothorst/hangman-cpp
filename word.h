#ifndef HANGMAN_CPP_WORD_H
#define HANGMAN_CPP_WORD_H

#include <string>

class word {
private:
    int randomnum(int max);
    int fsize(std::istream& file);
public:
    word();
    ~word();
    std::string word_to_guess();
};


#endif //HANGMAN_CPP_WORD_H
