#include <SFML/Graphics.hpp>

int main()
{
    // Window Creation & Event for key presses
    sf::RenderWindow window(sf::VideoMode(640, 480), "First Game", sf::Style::Titlebar | sf::Style::Close);
    sf::Event ev;

    // Game loop
    while (window.isOpen())
    {
        // Event polling
        while (window.pollEvent(ev))
        {
            switch (ev.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                    if (ev.key.code == sf::Keyboard::Escape)
                    {
                        window.close();
                    }
                    break;

            }
        }

        // Update

        // Render
        window.clear(sf::Color::Blue); // Clear old frame

        // Draw your game

        window.display(); // Tell app that window is done drawing
    }

    return 0;
}
