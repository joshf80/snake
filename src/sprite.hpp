//
// Created by Pc on 10/17/2025.
//

#ifndef SNAKE_SPRITE_HPP
#define SNAKE_SPRITE_HPP

#include <iostream>
#include <vector>
#include "globals.hpp"


class Sprite {
private:
    std::vector<int> m_pos;

public:
    explicit Sprite(std::vector<int> &pos) {
        m_pos = pos;
    }
};

#endif //SNAKE_SPRITE_HPP
