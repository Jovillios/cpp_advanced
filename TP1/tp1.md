# TP 1

## Part I

### Question 1

- The file producted by the command line (hello.o) is a binary file. 
- The argument -Wall is used to display all the warnings.

### Question 2

- The command line `gcc -o hello hello.o` is used to compile the file hello.o and produce the binary file hello.

### Question 3

- The cosinus function accept double, folat and long double 
- The math.h header needs to be included to have the definition of the cosinus function
- We to need to add the "-lm" argument to link the math library

### Question 4

- The first target need cosinus.o. To produce the cosinus.o file we have to build it using the second target
- The purpose of the clean target is to keep only the executable file of the program.

## Part II

### Question 5

- The parameters of the main function are the following:
    - argc: the number of arguments (type int)
    - argv: the arguments (type char**)

### Question 6

- There is always one more argument than the number of arguments. The first argument is the name of the program. `./hello arg1 arg2` will give 3 arguments : `./hello`, `arg1` and `arg2`

### Question 7

