#pragma once

#include <vector>
#include <tuple>
#include "MatrixLayerRotationIndexMapper.hpp"

namespace com::github::nimelo {
template<class T>
class MatrixLayerRotator {
  public:
    MatrixLayerRotator(std::vector<std::vector<T>> const& matrix) 
      : matrix_{matrix} {}
    
    auto rotate_reverse_clockwise(size_t const& rot)
     const -> std::vector<std::vector<T>> {
      auto rows = matrix_.size();
      auto columns = matrix_[0].size();

      std::vector<std::vector<T>> result(rows, std::vector<T>(columns));
      MatrixLayerRotationIndexMapper mlrim(rows, columns);

      for(size_t row = 0; row < rows; ++row) {
        for(size_t column = 0; column < columns; ++column) {
          auto mapped_row_column = mlrim.map(row, column, rot);
          result[std::get<0>(mapped_row_column)][std::get<1>(mapped_row_column)] = matrix_[row][column];
        }
      }
       
      return result;
    }
  private:
    std::vector<std::vector<T>> matrix_;
};
}