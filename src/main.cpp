#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

#include "globals.hpp"
#include "snake.hpp"
#include "sprite.hpp"

int main() {
    const int cellSize = 90;
    const int dimension = 9;

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

        for (int y = 0; y < dimension; y++) {
            for (int x = 0; x < dimension + 1; x++) {
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