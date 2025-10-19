//
// Created by Pc on 10/18/2025.
//

#ifndef SNAKE_MAP_HPP
#define SNAKE_MAP_HPP

#include "globals.hpp"
#include "snake.hpp"
#include <iostream>
#include <vector>


class Map {
private:
    std::vector<Cell> m_grid;
public:
    explicit Map(std::vector<Cell> &grid) {
        m_grid = grid;
    }
    void updateGrid(Snake &snake) {
        m_grid = std::vector<Cell>(90, Cell::EMPTY);
        m_grid[(9 - snake.getPos().y) * 10 + snake.getPos().x];
    }

    std::vector<Cell> returnGrid() {
        return m_grid;
    }
};


#endif //SNAKE_MAP_HPP
