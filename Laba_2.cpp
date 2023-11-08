#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");;
    int n;
    std::cout << "Введите размер последовательности: ";
    std::cin >> n;

    int* sequence = new int[n];

    std::cout << "Введите элементы последовательности: ";
    for (int i = 0; i < n; i++) {
        std::cin >> sequence[i];
    }

    
    int minNumber = sequence[0];
    for (int i = 1; i < n; i++) {
        if (sequence[i] < minNumber) {
            minNumber = sequence[i];
        }
    }

   
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (sequence[i] == minNumber) {
            count++;
        }
    }

    std::cout << "Минимальное число: " << minNumber << std::endl;
    std::cout << "Количество повторений: " << count << std::endl;

    delete[] sequence;

    return 0;
}