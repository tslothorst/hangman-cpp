#include "game.h"
#include "iostream"
#include "word.h"
#include "gallow.h"

game::game() {

}

game::~game() {

}

void game::play_game() {
        word w;
        gallow g;
        std::string word = w.word_to_guess();
        std::cout << "Let's play hangman!\n Guess the word I picked:\n";
        int wrong_count = -1;
        int word_length = word.length();
        std::string board = draw_positions(word_length, word);
        std::cout << board;

        do {
            char guess_letter {};
            std::cout << board << "\n";
            std::cout << "Enter a letter:";
            std::cin >> guess_letter;
            if (!check_letter(word,guess_letter)){
                ++wrong_count;
            }
            board = draw_positions(word_length, word, guess_letter);
            if (wrong_count>=0){
                std::cout << g.gallow_drawing(wrong_count);
            }
            std::cout << board;

        } while (wrong_count<11);

}

std::string game::draw_positions(int length, std::string word, char guess) {
    std::string temp {};
    for (int i = 0; i < length; ++i) {
        temp += ".";
    }
    int position = 0;
    for (int i = 0; i < length; ++i) {
        if(tolower(guess) == tolower(word.at(i))){
            temp.at(i) = toupper(guess);
        }
    }

    return std::string();
}

bool game::check_letter(std::string word, char guess) {
    int correct_count = 0;
    for (int i = 0; i < word.length(); ++i) {
        if(tolower(guess) == tolower(word.at(i))){
            ++correct_count;
        }
    }
    if (correct_count>0){
        return true;
    }
    return false;
}

