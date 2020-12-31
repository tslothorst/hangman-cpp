#include "word.h"
#include "fstream"
#include "random"
#include "string"
#include "NoWordlistException.h"

word::word() {

}

std::string word::word_to_guess() {
    std::string temp{};
    std::ifstream InputFile{ "..\\words.txt"};
    if(!InputFile){
        throw NoWordlistException();
    }
    else {

        int maxnum = fsize(InputFile);
        int randomNumber = randomnum(maxnum);

        for (int i = 0; i < randomNumber; ++i) {
            if (!InputFile.eof()) {
                std::getline(InputFile, temp);
            }
        }

        InputFile.close();
    }

    return temp;
}

word::~word() {

}

int word::randomnum(int max) {

    int randomNumber{};
    // Use random_device to create a seed
    std::random_device randomDevice;
    unsigned seed = randomDevice();

    // Create the default_random_engine with above seed
    std::default_random_engine randomNumberGenerator(seed);

    // Create uniform distribution to limit our random number to a specified range
    std::uniform_int_distribution<int> randomRange(0, max);
    randomNumber = randomRange(randomNumberGenerator);

    return randomNumber;
}

int word::fsize(std::istream& file) {
    int Iteration = std::count(std::istreambuf_iterator<char>(file),std::istreambuf_iterator<char>(), '\n');

    return Iteration;
}
