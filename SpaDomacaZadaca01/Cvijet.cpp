#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow& window) : window(window) {}


void Cvijet::nacrtaj() {

    // Stabljika
    sf::RectangleShape stabljika(sf::Vector2f(20.f, 200.f));
    stabljika.setFillColor(sf::Color::Green);
    stabljika.setPosition(390.f, 300.f); 

    //List 
    sf::ConvexShape list;
    list.setPointCount(4);
    list.setPoint(0, sf::Vector2f(390.f, 470.f)); 
    list.setPoint(1, sf::Vector2f(430.f, 420.f));
    list.setPoint(2, sf::Vector2f(470.f, 470.f));
    list.setPoint(3, sf::Vector2f(430.f, 520.f)); 
    list.setFillColor(sf::Color::Green);

    //Krugovi
    sf::CircleShape veciKrug(100.f);
    veciKrug.setFillColor(sf::Color::Red);
    veciKrug.setPosition(300.f, 100.f);
    sf::CircleShape manjiKrug(50.f);
    manjiKrug.setFillColor(sf::Color::Yellow);
    manjiKrug.setPosition(300.f + (veciKrug.getRadius() - manjiKrug.getRadius()), 100.f + (veciKrug.getRadius() - manjiKrug.getRadius())); 

    //Sunce
  sf::CircleShape sunce(40.f);
  sunce.setFillColor(sf::Color::Yellow);
  sunce.setPosition(50.f, 50.f);

    window.draw(stabljika);
    window.draw(list);
    window.draw(veciKrug);
    window.draw(manjiKrug);
   window.draw(sunce);





}











