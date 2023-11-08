#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    const int n = 10;
    int X[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Введите элемент X[" << i << "]: ";
        std::cin >> X[i];
    }

    int maxElement = X[0];
    int minElement = X[0];
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (X[i] > maxElement) {
            maxElement = X[i];
            maxIndex = i;
        }
        if (X[i] < minElement) {
            minElement = X[i];
            minIndex = i;
        }
    }

    std::cout << "Максимальный элемент: " << maxElement << ", Максимальный индекс: " << maxIndex << std::endl;
    std::cout << "Минимальный элемент: " << minElement << ", Минимальный индекс: " << minIndex << std::endl;

    return 0;
}