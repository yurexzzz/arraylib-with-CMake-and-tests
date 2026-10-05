#include "arraylib.h"

#include <iostream>
#include <cstddef>
#include <iomanip>

int main() {
    int measurements[] = {101, 98, 103, 100, 97, 105, 99, 102, 96, 104};
    const std::size_t n = sizeof(measurements) / sizeof(measurements[0]);
    int countUpAverage = 0;
    double avg = arr_average(measurements, n);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Среднее значение: " << avg << '\n';
    std::cout << "Минимальное значение: " << arr_min(measurements, n) << '\n';
    std::cout << "Максимальное значение: " << arr_max(measurements, n) << '\n';
    std::cout << "Медиана: " << arr_median(measurements, n) << '\n';

    for(std::size_t i = 0; i < n; ++i) {
        if(measurements[i] > avg) countUpAverage += 1;
    }

    std::cout << "Кол-во измерений выше среднего: " << countUpAverage << '\n';
    return 0;
}