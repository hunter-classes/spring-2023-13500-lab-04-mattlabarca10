#include <iostream>
#include "shapes.h"

int main()
{
    std::string result;
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << box(3,5);
    std::cout << "\n------------------\n";

    result = box(5,3);
    std::cout << "box(5,3):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    
    result = checkerboard(8,6);
    std::cout << "checkerboard(8,6):\n";
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
    
    result = upper(5);
    std::cout << "upper(5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = upper(8);
    std::cout << "upper(8):\n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = trapezoid(12,5);
    std::cout << "trap(12,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = trapezoid(12,7);
    std::cout << "trap(12,7):\n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = checkerboard3x3(15,12);
    std::cout << "checkerboard3x3(15,12):\n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = checkerboard3x3(10,17);
    std::cout << "checkerboard3x3(10,17):\n";
    std::cout << result;
    std::cout << "\n------------------\n";

    return 0;
}

