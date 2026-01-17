#include <iostream>
#include <functional>

std::function<int(int)> addOne() {
    return [](int number) { return number + 1; };
}

int main() {
    auto increment = addOne();
    std::cout << increment(4) << std::endl; 
    return 0;
}