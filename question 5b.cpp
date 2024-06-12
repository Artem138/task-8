#include <iostream>

// Шаблон функции mult
template <typename T>
T mult(T value, int multiplier) {
    return value * multiplier;
}

int main() {
    std::cout << mult(2, 3) << '\n';
    std::cout << mult(1.2, 3) << '\n';

    return 0;
}
