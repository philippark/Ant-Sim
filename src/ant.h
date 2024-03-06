#ifndef ANT_H
#define ANT_H

#include <SFML>

class Ant : public sf::Drawable{
public:
    Ant();
    
private:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};

#endif