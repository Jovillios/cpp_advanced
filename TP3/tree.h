#ifndef TREE_H
#define TREE_H


class Tree {
    public:
        Tree();
        Tree(double h);
        Tree(bool e);
        Tree(bool e, double h);
        virtual ~Tree();
        virtual void draw();
        virtual void info();
        void setHeight(double h);
        double getHeight() const;
        void setEvergreen(bool e);
        bool isEvergreen() const;
    protected:
        bool evergreen;
        double height;
};

#endif