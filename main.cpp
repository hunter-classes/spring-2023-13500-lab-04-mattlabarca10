#include <iostream>
#include "shapes.h"

int main()
{
    std::string result;
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = box(5,3);
    std::cout << "box(5,3):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    /*
    result = checkerboard(3,5);
    std::cout << "checkerboard(3,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = checkerboard(5,3);
    std::cout << "checkerboard(5,3):\n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = cross(5);
    std::cout << "cross(5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = cross(8);
    std::cout << "cross(8):\n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = lower(5);
    std::cout << "lower(5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = lower(8);
    std::cout << "lower(8):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    */
    return 0;
}

//more tests to show that box works fully could be added

//more code down here

