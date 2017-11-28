#pragma once

#include <vector>
#include <numeric>

namespace com::github::nimelo {
  template<class T>
  class GCD {
    public:
      GCD(std::vector<T> const& numbers)
        : numbers_(numbers) {}
      
      auto get() const -> T {
        auto result = std::accumulate(
          std::next(numbers_.begin()),
          numbers_.end(),
          numbers_[0],
          gcd
        );
        return result;
      }
    private:
      auto static gcd(T const& a, T const& b) -> T const {
        return b == 0 ? a : gcd(b, a % b);
      }
      std::vector<T> numbers_;
  };
}