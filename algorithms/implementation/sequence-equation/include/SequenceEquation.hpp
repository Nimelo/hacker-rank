#pragma once

#include <vector>
#include <algorithm>
#include <cstddef>
#include <iterator>

namespace com::github::nimelo {
  template<class T>
  class SequenceEquation {
    public:
      SequenceEquation(std::vector<T> const& sequence)
        : sequence_{sequence} {}
      
      auto return_composition_index(
        T const& value
      ) const -> T {
        auto index = find_index(value);
        return find_index((T)index);
      }

    private:  
      auto find_index(T const& value)
       const -> size_t {
        return std::distance(
          sequence_.begin(),
          std::find(
            sequence_.begin(),
            sequence_.end(),
            value)) + 1;
      }
      std::vector<T> sequence_;
  };
}