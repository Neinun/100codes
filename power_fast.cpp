#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <cassert>
#include <ctime>
#include <cmath>

double fast_power_recursive(int64_t a, int64_t b) {
    // negative power
    if (b < 0)
        return 1.0 / fast_power_recursive(a, -b);

    if (b == 0) return 1;
    int64_t bottom = fast_power_recursive(a, b >> 1);
    

    int64_t result;
    if ((b & 1) == 0)  // case1
        result = bottom * bottom;
    else  // case2
        result = bottom * bottom * a;
    return result;
}

double fast_power_linear(int64_t a, int64_t b) {
    // negative power
    if (b < 0)
        return 1.0 / fast_power_linear(a, -b);

    double result = 1;
    while (b) {
        if (b & 1) result = result * a;
        a = a * a;
        b = b >> 1;
    }
    return result;
}

int main() {
    std::srand(time(NULL));
    std::ios_base::sync_with_stdio(false);

    std::cout << "Testing..." << std::endl;
    for (int i = 0; i < 20; i++) {
        unsigned int *rand1, *rand2;
        int a = rand_r(rand1) % 20 - 10;
        int b = rand_r(rand2) % 20 - 10;
        std::cout << std::endl << "Calculating " << a << "^" << b << std::endl;
        assert(fast_power_recursive(a, b) == std::pow(a, b));
        assert(fast_power_linear(a, b) == std::pow(a, b));

        std::cout << "------ " << a << "^" << b << " = "<<
            fast_power_recursive(a, b) << std::endl;
    }

    int64_t a, b;
    std::cin >> a >> b;

    std::cout << a << "^" << b << " = "<<
        fast_power_recursive(a, b) << std::endl;

    std::cout << a << "^" << b << " = "<<
        fast_power_linear(a, b) << std::endl;

    return 0;
}
