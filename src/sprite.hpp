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
    Point m_pos{};

public:
    explicit Sprite(Point &pos) {
        m_pos = pos;
    }

    Point getPos() {
        return m_pos;
    }
};

#endif //SNAKE_SPRITE_HPP
