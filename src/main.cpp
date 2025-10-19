#include <SFML/Graphics.hpp>
#include <vector>
#include <deque>
#include <iostream>

#include "globals.hpp"
#include "snake.hpp"
#include "sprite.hpp"
#include "map.hpp"

int main() {
    const int cellSize = 90;
    const int width = 10;
    const int height = 9;

    std::vector<Cell> grid(width * height, Cell::EMPTY);
    Point a(1, 4);
    Point b(0, 4);
    std::deque<Point> body = {a, b};
    Point start(2,4);


    auto* snake = new Snake(start, body);

    Map* map = new Map(grid);
    map->updateGrid(reinterpret_cast<Snake &>(snake));


    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            Cell c = grid[y * width + x];
            char symbol = '.';
            if (c == Cell::SNAKE) symbol = 'S';
            else if (c == Cell::FRUIT) symbol = 'F';
            else if (c == Cell::EMPTY) symbol = 'E';
            std::cout << symbol << ' ';
        }
        std::cout << '\n';
    }

    sf::RenderWindow window(sf::VideoMode({900, 810}), "Snake Game", sf::Style::Close);
    window.setFramerateLimit(60);


    sf::RectangleShape cell(sf::Vector2f(cellSize - 1, cellSize - 1));
    cell.setFillColor(sf::Color(60, 120, 60));


    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {

            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear(sf::Color::Black);

        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width + 1; x++) {
                cell.setPosition({x * cellSize * 1.0f, y * cellSize * 1.0f});
                if (x % 2 == 1 && y % 2 == 0) {
                    cell.setFillColor(sf::Color(60, 120, 60));
                }
                else if (x % 2 == 0 && y % 2 == 1) {
                    cell.setFillColor(sf::Color(60, 120, 60));
                }
                else {
                    cell.setFillColor(sf::Color(60, 130, 70));
                }
                window.draw(cell);
            }
        }
        window.display();
    }
}