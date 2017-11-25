#pragma once

#include <vector>
#include <algorithm>
#include <numeric>
#include <tuple>
#include <stdexcept>

namespace com::github::nimelo {
  template<typename T>
  class MinMaxSum {
    public:
      MinMaxSum(std::vector<T> const& elements) : elements_(elements) {}
      
      template<typename R>
      std::tuple<R, R> get(size_t k) { 
        auto n = elements_.size();
        if (k > n) {
          throw std::invalid_argument("k should be < n!");
        }

        std::sort(elements_.begin(), elements_.end(), std::less<T>());
        
        auto min = std::accumulate(elements_.begin(), elements_.begin() + k, R());
        auto max = std::accumulate(elements_.end() - k, elements_.end(), R());

        return { min, max };
      }
    private:
      std::vector<T> elements_;
  };
}