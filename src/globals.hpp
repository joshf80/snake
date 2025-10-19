//
// Created by Pc on 10/18/2025.
//

#ifndef SNAKE_GLOBALS_HPP
#define SNAKE_GLOBALS_HPP

struct Point {
    int x;
    int y;
    explicit Point(int x_val = 0, int y_val = 0) : x(x_val), y(y_val) {}
    bool operator== (const Point &other) const {
        return x == other.x && y == other.y;
    }
};

enum Game {
    START,
    ONGOING,
    DEATH
};

enum Cell {
    EMPTY,
    FRUIT,
    SNAKE
};

enum Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

#endif //SNAKE_GLOBALS_HPP
