#include <iostream>

const int ARRAY_SIZE = 5;

int main() {
    int array[ARRAY_SIZE] = { 2, 5, 9, 12, 15 };

    int count = 0;
    int sum = 0;

    std::cout << "Number of elements in the array: " << ARRAY_SIZE << std::endl;

    std::cout << "Array elements: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << array[i] << " ";

        if (array[i] % 3 == 0) {
            sum += array[i];
        }
    }
    std::cout << std::endl;

    std::cout << "Sum of elements divisible by 3: " << sum << std::endl;

    return 0;
}
