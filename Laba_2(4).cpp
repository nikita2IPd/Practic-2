int main() {
    const int maxSize = 100;
    int staticArray[maxSize] = {12, 7, 25, 16, 3, 8, 19, 14, 30, 5}; 

    int n = sizeof(staticArray) / sizeof(staticArray[0]);

    int maxElement = staticArray[0];
    int minElement = staticArray[0];
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (staticArray[i] > maxElement) {
            maxElement = staticArray[i];
            maxIndex = i;
        }
        if (staticArray[i] < minElement) {
            minElement = staticArray[i];
            minIndex = i;
        }
    }

    std::cout << "Максимальный элемент: " << maxElement << ", Индекс: " << maxIndex << std::endl;

    std::cout << "Минимальный элемент: " << minElement << ", Индекс: " << minIndex << std::endl;

    return 0;
}
