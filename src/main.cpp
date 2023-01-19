#include "resourceholder.hh"
#include <SFML/Graphics.hpp>
#include <iostream>

// This is the Resource ID for sf::Texture
namespace Textures
{
    enum ID
    {
        Landscape,
        Airplane,
        Missile
    };
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "Resources");
    window.setFramerateLimit(20);

    // We're going to try and load our resources.
    ResourceHolder<sf::Texture, Textures::ID> textures;
}
