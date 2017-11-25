#pragma once

#include <vector>
#include <cstddef>
#include <algorithm>
#include <functional>

namespace com::github::nimelo {
  template<typename T>
  class MaxCounter {
    public:
      MaxCounter(std::vector<T> const& elements) : elements_{elements} {
        std::sort(elements_.begin(), elements_.end(), std::less<T>());
      }

      size_t get() const { 
        size_t counter = 0;
        auto first_max_element = std::max_element(elements_.begin(), elements_.end());

        while(first_max_element != elements_.end()) {
          ++first_max_element;
          counter++;
        }

        return counter;
      }

    private:
      std::vector<T> elements_;
  };
}