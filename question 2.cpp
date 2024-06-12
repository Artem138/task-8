#include <iostream>

namespace Constants {
    inline constexpr double pi { 3.14159 };
}

// Псевдоним типа для double
using Radian = double;

// Псевдоним типа для double
using Degree = double;

Radian convertToRadians(Degree degrees) {
    return degrees * Constants::pi / 180;
}

int main() {
    std::cout << "Enter a number of degrees: ";
    Degree degrees{};
    std::cin >> degrees;

    Radian radians { convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}
