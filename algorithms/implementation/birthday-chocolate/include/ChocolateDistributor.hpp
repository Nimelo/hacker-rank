#pragma once

#include <vector>
#include <tuple>
#include <algorithm>
#include <numeric>

namespace com::github::nimelo {
  template<class T>
  class ChocolateDistributor {
    public:
      ChocolateDistributor(std::vector<T> const& bars) 
        : bars_{bars} {} 
      
      auto get(size_t const& range, T const& sum) -> size_t const { 
        if(bars_.size() < range)
          return static_cast<size_t>(0);
        auto last_added_number_iterator = std::next(bars_.begin(), range);
        auto partial_sum = std::accumulate(bars_.begin(), last_added_number_iterator, T());
        size_t options = partial_sum == sum ? 1 : 0;
        
        for(size_t i = 0; i < bars_.size() - range; ++i) {
          partial_sum -= bars_[i];
          partial_sum += bars_[i + range];
          if(partial_sum == sum)
            ++options;
        }

        return options;
      }
    private:
      std::vector<T> bars_;
  };
}