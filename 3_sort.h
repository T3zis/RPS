#pragma once

#include "0_input_check.h"

class Sort {
public:
  void selection_sort(std::vector<int> &vec) {
    int min_index;
    int size = vec.size();
    for (int i = 0; i < size - 1; i++) {
      min_index = i;
      for (int j = i + 1; j < size; j++)
        if (vec[j] < vec[min_index])
          min_index = j;
      std::swap(vec[i], vec[min_index]);
    }
    std::cout << "\nОтсортированный массив:\n";
    for (int i = 0; i < size; i++)
      std::cout << vec[i] << " ";
    std::cout << "\n";
  }
};