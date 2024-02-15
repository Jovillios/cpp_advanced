#include <iostream>
#include "tree.h"

int main(int argc, char** argv) {
    Tree *t1 = new Tree();
    std::cout << t1->getHeight() << std::endl;
    std::cout << t1->isEvergreen() << std::endl;
}