#include <iostream>
#include <math.h>

int main(int argc, char *argv[])
{
    double a = atof(argv[1]); // convert string to double
    double res;

    res = cos(a);

    std::cout << "Cos(" << a << ") = " << res << std::endl;

    return 0;
}