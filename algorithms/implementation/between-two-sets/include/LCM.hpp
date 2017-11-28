#pragma once

#include <vector>
#include <numeric>
#include "GCD.hpp"

namespace com::github::nimelo {
  template<class T>
  class LCM {
    public:
      LCM(std::vector<T> const& numbers)
        : numbers_(numbers) {}
      
      auto get() const -> T {
        auto result = std::accumulate(
          std::next(numbers_.begin()),
          numbers_.end(),
          numbers_[0],
          lcm
        );
        return result;
      }
    private:
      auto static lcm(T const& a, T const& b) -> T const  {
        auto nominator = a * b;
        auto gcd = GCD<int>({ a, b }).get();
        return nominator / gcd;
      }
      std::vector<T> numbers_;
  };
}