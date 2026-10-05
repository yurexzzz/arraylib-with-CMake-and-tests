#include <cstddef>
#include <vector>
#include <algorithm>
#include "arraylib.h"

int arr_sum(const int* arr, std::size_t n) {
    int s = 0;
    for(std::size_t i = 0; i < n; ++i) s += arr[i];
    return s;
}

int arr_max(const int* arr, std::size_t n) {
    int max = arr[0];
    for(std::size_t i = 0; i < n; ++i) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int arr_min(const int* arr, std::size_t n) {
    int min = arr[0];
    for(std::size_t i = 0; i < n; ++i) {
        if(arr[i] < min) min = arr[i];
    }
    return min;
}

double arr_average(const int* arr, std::size_t n) {
    int s = 0;
    double average = 0.0;
    for(std::size_t i = 0; i < n; ++i) s += arr[i];
    average = double(s) / n;
    return average;
}

int arr_count_positive(const int* arr, std::size_t n) {
    int countp = 0;
    for(std::size_t i = 0; i < n; ++i){
        if(arr[i] > 0) countp += 1;
    }
    return countp;
}

int arr_count_negative(const int* arr, std::size_t n) {
    int countn = 0;
    for(std::size_t i = 0; i < n; ++i){
        if(arr[i] < 0) countn += 1;
    }
    return countn;
}

int arr_count_zero(const int* arr, std::size_t n) {
    int countz = 0;
    for(std::size_t i = 0; i < n; ++i){
        if(arr[i] == 0) countz += 1;
    }
    return countz;
}

int arr_product(const int* arr, std::size_t n) {
    int prdct = 1;
    for(std::size_t i = 0; i < n; ++i) prdct *= arr[i];
    return prdct;
}

double arr_median(const int* arr, std::size_t n) {
    double median = 0.0;
    std::vector<int> copyarr(arr, arr + n);
    std::sort(copyarr.begin(), copyarr.end());
    if(n % 2 == 0) median = (copyarr[n/2] + copyarr[n/2 - 1]) / 2.0;
    else median = copyarr[n/2];
    return median;
}