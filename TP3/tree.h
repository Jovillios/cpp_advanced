#ifndef TREE_H
#define TREE_H


class Tree {
    public:
        Tree();
        Tree(double h);
        ~Tree();
        void draw();
        void info();
        void setHeight(double h);
        double getHeight() const;
        void setEvergreen(bool e);
        bool isEvergreen() const;
    private:
        bool evergreen;
        double height;
};

#endif