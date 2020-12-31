#include <iostream>
#include "game.h"
#include "NoWordlistException.h"

int main() {
    try {
        game g;
        g.play_game();
    }
    catch (const NoWordlistException & ex){
        std::cerr << ex.what() << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}
