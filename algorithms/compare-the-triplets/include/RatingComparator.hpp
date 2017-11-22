#pragma once

#include <vector>
#include <tuple>
#include <cstddef>
#include <stdexcept>

namespace com::github::nimelo {
  template<class T>
  class RatingComparator {
    public:
      RatingComparator(std::vector<T> const& first, std::vector<T> const& second)
        : first_{first}, second_{second} {
          if (first_.size() != second_.size())
            throw std::invalid_argument("");
        }
      
      auto get() const -> std::tuple<size_t, size_t> {
        size_t first = 0, second = 0;
        
        for (auto first_it = first_.begin(), second_it = second_.begin(), end = first_.end(); first_it != end; ++first_it, ++second_it)
        {
          if(*first_it > *second_it)
            ++first;
          else if(*second_it > *first_it)
            ++second;
        }

        return {first, second};
      }
    private:
      std::vector<T> first_;
      std::vector<T> second_;
  };
}