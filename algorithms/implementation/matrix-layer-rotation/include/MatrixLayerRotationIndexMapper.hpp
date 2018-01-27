#pragma once

#include <cstddef>
#include <algorithm>
#include <tuple>

namespace com::github::nimelo {
class MatrixLayerRotationIndexMapper {
  public:
    MatrixLayerRotationIndexMapper(
      size_t rows,
      size_t columns
    ) : matrix_max_row_index_(rows - 1),
        matrix_max_column_index_(columns - 1) {}
    
    auto map(size_t const& row, size_t const& column, size_t const& rot = 1)
     const -> std::tuple<size_t, size_t> {
      auto const& layer = get_layer(row, column);
      auto max_row_index = matrix_max_row_index_ - layer;
      auto max_column_index = matrix_max_column_index_ - layer;
      
      size_t m_row = row, m_column = column;
      size_t rotations = rot%get_layer_length(
        max_row_index,
        max_column_index,
        layer
      );

      while(rotations--) {
        if(m_row == layer && m_column > layer)
          --m_column;
        else if(m_row == max_row_index && m_column < max_column_index)
          ++m_column;
        else if(m_column == layer && m_row < max_row_index)
          ++m_row;
        else if(m_column == max_column_index && m_row > layer)
          --m_row;
      }

      return { m_row, m_column };       
     }

    inline auto get_layer(
      size_t const& row,
      size_t const& column)
      const -> size_t {
      return std::min(
        std::min(
          row,
          matrix_max_row_index_ - row
        ),
        std::min(
          column,
          matrix_max_column_index_ - column
        )
      );
    }

    inline auto get_layer_length(
      size_t const& max_row_index,
      size_t const& max_column_index,
      size_t const& layer) 
      const -> size_t {
      return 2 * (max_row_index - layer + 1)
      + 2 * (max_column_index - layer + 1) - 4;
    }

  private:
    size_t matrix_max_row_index_;
    size_t matrix_max_column_index_;
};
}