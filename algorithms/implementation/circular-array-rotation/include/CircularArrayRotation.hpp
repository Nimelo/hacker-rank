#pragma once

#include <vector>
#include <cstddef>

namespace com::github::nimelo {
  template<class T>
  class CircularArrayRotation {
    public:
      CircularArrayRotation(std::vector<T> const& array)
        : array_{array} {}

      auto get_at_after_rotation(
        size_t const& index,
        size_t const& rotations
      ) const -> T {
        auto n = array_.size();
        auto r = rotations -1;
        auto new_first_index = n - r % n - 1;
        auto new_index = new_first_index + index;

        auto adjusted_index = 
          new_index >= n
          ? new_index - n
          : new_index;
        
        return array_.at(adjusted_index);
      }
    private:
      std::vector<T> array_;
  };
}