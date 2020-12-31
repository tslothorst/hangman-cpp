#include "gallow.h"
#include "array"

gallow::gallow() {

}

gallow::~gallow() {

}

std::string gallow::gallow_drawing(int a) {

    std::array<std::string,11> drawing = {
            "------\n",
            "|\n------\n",
            "|\n|\n------\n",
            "|\n|\n|\n------\n",
            "|\n|\n|\n------\n",
            "|\n|\n|\n|\n------\n",
            "------\n|\n|\n|\n|\n------\n",
            "------\n|\t|\n|\n|\n|\n------\n",
            "------\n|\t|\n|\tO\n|\n|\n------\n",
            "------\n|\t|\n|\tO\n|\t-0-\n|\n------\n",
            "------\n|\t|\n|\tO\n|\t-0-\n|\t||\n------\n"
    };

    return std::string(drawing.at(a));
}


