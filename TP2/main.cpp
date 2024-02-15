#include "tree.h"

int main(int argc, char** argv) {
    Tree *t1 = new Tree();
    t1->info();
    Tree *t2 = new Tree();
    t2->info();
    Tree t3 = Tree();
    t3.info();
    Tree t4 = Tree();
    t4.info();
    delete t1;
    delete t2;

    return 0;
}