#pragma once
#ifndef CVIJET_H
#define CVIJET_H
#include <SFML/Graphics.hpp>

class Cvijet {
private:
    sf::RenderWindow& window;

public:
    Cvijet(sf::RenderWindow& window);
    void nacrtaj();
};

#endif



