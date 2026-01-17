#include <iostream>

int main() {
    int* arr = new int[3]; // memory allocation
    arr[0] = 1; arr[1] = 2; arr[2] = 3;
    for (int i = 0; i < 3; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;

    delete[] arr; // manually deallocate memory
    return 0;
}