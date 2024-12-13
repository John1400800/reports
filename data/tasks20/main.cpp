#include <cstdlib>
#include <iostream>

#include "max.hpp"

int32_t main(int32_t, const char**) {
    std::cout << "Поочередно введите два числа для сравнения: ";
    int32_t x, y;
    std::cin >> x >> y;
    std::cout << "Максимальное значение между этими числами: " << max(x, y) << '\n';
    return EXIT_SUCCESS;
}
