#pragma once

#include <vector>
#include <cstddef>
#include <cmath>

namespace com::github::nimelo {
  template<typename T>
  class DiagonalDifference {
    public:
      DiagonalDifference(std::vector<std::vector<T>> const& matrix) : matrix_(matrix) {}
      T get() const { 
        T right_diagonal = T(), left_diagonal = T();
        size_t offset = 0, n = matrix_.size();
        
        for(auto row : matrix_) {
          right_diagonal += row.at(offset);
          left_diagonal += row.at(n - offset - 1);
          ++offset;
        }
        
        return abs(right_diagonal - left_diagonal);
      }
    private:
      std::vector<std::vector<T>> matrix_;
  };
}