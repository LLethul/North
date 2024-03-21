/*
* Created by LLethul on 3/21/2024.
*/

#ifndef NORTH_POSITION_H
#define NORTH_POSITION_H

#include <cstddef>
#include <string>
#include "util.h"

struct position {
    size_t ln, col;
};

position init_position(size_t ln, size_t col) {
    return {.ln = ln, .col = ln};
}

std::string position_to_string(const position& pos) {
    return fmt("%i:%i", pos.ln, pos.col);
}

#endif //NORTH_POSITION_H
