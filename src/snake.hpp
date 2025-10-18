//
// Created by Pc on 10/18/2025.
//

#ifndef SNAKE_SNAKE_HPP
#define SNAKE_SNAKE_HPP

#include "sprite.hpp"
#include "globals.hpp"
#include <deque>

class Snake : public Sprite {
private:
    std::deque<Point> m_body;
    Direction m_direction;
public:
    Snake(std::vector<int> &pos, std::deque<Point> &body) : Sprite(pos) {
        m_direction = RIGHT;
        m_body = body;
    }
};

#endif //SNAKE_SNAKE_HPP
