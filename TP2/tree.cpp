#include "tree.h"

#include <iostream>

Tree::Tree() {
    std::cout << "Creating a new tree" << std::endl;
    this->height = 10.0;
    this->evergreen = false;
    this->truc = 42;
}

Tree::~Tree() {
    std::cout << "Destroying a tree" << std::endl;
}

void Tree::draw() {
    std::cout << "Drawing a tree" << std::endl;
}

void Tree::info() {
    std::cout << "This tree is planted at address " << this << std::endl;
}