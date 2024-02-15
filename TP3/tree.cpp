#include "tree.h"

#include <iostream>

Tree::Tree() {
    std::cout << "Creating a new tree" << std::endl;
}

Tree::Tree(double h) {
    std::cout << "Creating a new tree" << std::endl;
    this->height = h;
}

Tree::~Tree() {
    std::cout << "Destroying a tree" << std::endl;
}

void Tree::draw() {
    std::cout << "Drawing a tree" << std::endl;
}

void Tree::info() {
    std::cout << "This tree is planted at address " << this << std::endl;
    std::cout << "It is " << this->height << " meters tall" << std::endl;
    if (this->evergreen) {
        std::cout << "It is an evergreen tree" << std::endl;
    } else {
        std::cout << "It is not an evergreen tree" << std::endl;
    }
}

void Tree::setHeight(double h) {
    this->height = h;
}

double Tree::getHeight() const {
    return this->height;
}

void Tree::setEvergreen(bool e) {
    this->evergreen = e;
}

bool Tree::isEvergreen() const {
    return this->evergreen;
}
