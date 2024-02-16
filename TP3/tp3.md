# TP 3

## Part 1

### Question 1

- When trying to change a private attribute, we get an error. This is because the attribute is private and can only be accessed within the class. To change the value of a private attribute, we can use the setter method.

- We need to had the keyword `const` to the getter methods to indicate that the method does not change the object.

### Question 2

- The program compile and run
- The value of height is 5.5 and the value of evergreen is 0
- The danger of using default constrcutor provided by the compiler is that the attributes are not initialized. So this values can be anything.

### Question 3

- The program compile and run

### Question 4

- We need to include "tree.h" in "pine.h" in order to inherit the class Tree.

### Question 5

- There is a call to the Tree constructor in the Pine constructor. This is because the Pine class inherits from the Tree class. The Tree constructor is called before the Pine constructor.

- There is a call to the Tree destructor in the Pine destructor. This is because the Pine class inherits from the Tree class. The Tree destructor is called after the Pine destructor.

- When displaying the address of the Pine object, we get the same address as the Tree object. This is because the Pine object is a Tree object.

### Question 6

- Constructor and destructor are both called for the heap and the stack pine object. I use the keyword "delete" to free the memory allocated for the heap object.

## Part II

### Question 7

- Tree.draw() is called in the Pine.draw() method. This is because the Pine class inherits from the Tree class and the method is static in C++ (not virtual).

- This can be solved by making the draw method virtual in the Tree class.

### Question 8

- At the destruction of the objects because Tree has a non-virtual destructor, the destructor of the derived class is not called. This can lead to memory leaks.

- It can be solved by making the destructor virtual in the Tree class.



