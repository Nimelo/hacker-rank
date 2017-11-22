#pragma once

#include <vector>
#include <numeric>

namespace com::github::nimelo {
  template<typename T>
  class Summation {
    public:
      Summation(const std::vector<T> & summands) : summands_{summands} {}
      T get() const { 
        return std::accumulate(summands_.begin(), summands_.end(), T());
      }
    private:
      std::vector<T> summands_;
  };
}