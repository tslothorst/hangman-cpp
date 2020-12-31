#ifndef HANGMAN_CPP_GAME_H
#define HANGMAN_CPP_GAME_H


#include <string>

class game {
private:
    std::string draw_positions(int length, std::string word, char guess={});
    bool check_letter(std::string word, char guess);
public:
    game();
    ~game();
    void play_game();
};


#endif //HANGMAN_CPP_GAME_H
