#ifndef NORTH_TOKEN_H
#define NORTH_TOKEN_H

#include <string>
#include "position.h"

struct token {
    std::string value;
    typedef enum {
        number, binary_op, literal, string,
        exclamation, lparen, rparen, equals,
        dot, comma,
    } kind;

    token::kind type;
    position pos;
};

token* init_token(const std::string& value, token::kind type) {
    auto* t = new token{};
    t->value = value;
    t->type = type;
}

token* init_token(const std::string& value, token::kind type, const position& pos) {
    auto* t = new token{};
    t->value = value;
    t->type = type;
    t->pos = pos;
}

#endif //NORTH_TOKEN_H
