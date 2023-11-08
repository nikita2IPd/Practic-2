#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Количество чисел в массиве: " << size << std::endl;

    std::cout << "Содержимое массива: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 3 == 0) {
            sum += array[i];
        }
    }

    std::cout << "Сумма элементов массива, кратных 3: " << sum << std::endl;

    return 0;
}