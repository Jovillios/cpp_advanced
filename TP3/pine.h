#include "tree.h"

class Pine : public Tree {
public:
    Pine();
    Pine(double h);
    virtual ~Pine();
    void getHeight();
    void isEvergreen();
    virtual void draw();
    virtual void info();
};

