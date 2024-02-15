# Part I

## Question 1

- In order to use the Tree Class we need to include "tree.h" in our code.
- If we include the same file multiple times, the compiler will give us an error because it will try to define the same class multiple times.

## Question 2

- The Tree:: prefix is used to specify that the function is a member of the Tree class.
- It is not possible to build an executable from the code 

## Question 3

- There is no `#include <iostream>` instruction at the start of the file because it is already included in the `tree.h` file.
- We can link the `main.o`and `tree.o` by using the command `g++ -o main main.o tree.o`

## Question 4

- The constructor is called when we create a new object of the class. The destructor is called when the object is destroyed.
- The constructor is called first and the destructor is called last.

## Question 5

- To manually destory such an object we need to "delete" it with the "delete" keyword.
- To use the draw() method we need to use the "->" operator. So the correct way to call the draw() method is `t->draw()`

## Question 6

- The Stack and the Heap are two different memory areas. Thus the memory address of a variable in the stack is different from the memory address of a variable in the heap.

## Question 7

- The effect on the actual addresses of the objects is that the addresses of the heap and the stack are much more different than before because now the objects are much larger.