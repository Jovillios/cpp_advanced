#include "pine.h"
#include <iostream>

Pine::Pine() : Tree(true)
{
    std::cout << "Planting a Pine" << std::endl;
}

Pine::Pine(double h) : Tree(true,h) {
    std::cout << "Planting a Pine" << std::endl;
    std::cout << "Evergreen: " << this->evergreen << std::endl;
}

void Pine::getHeight() {
    std::cout << "The Pine is " << this->height << " meters tall" << std::endl;
}

void Pine::isEvergreen() {
    if (this->evergreen) {
        std::cout << "The Pine is an evergreen tree" << std::endl;
    } else {
        std::cout << "The Pine is not an evergreen tree" << std::endl;
    }
}

void Pine::draw()
{
    std::cout << "Drawing a Pine of height" << height << std::endl;
}

void Pine::info() {
    std::cout << "This Pine is planted at address " << this << std::endl;
}

Pine::~Pine() {
    std::cout << "Cutting down a Pine" << std::endl;
}