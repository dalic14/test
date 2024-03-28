#include <SFML/Graphics.hpp>
#include "Cvijet.h" 

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    Cvijet cvijet(window);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        cvijet.nacrtaj(); 
        window.display();
    }

    return 0;
}