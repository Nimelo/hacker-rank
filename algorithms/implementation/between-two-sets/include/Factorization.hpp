#pragma once

#include <vector>
#include <numeric>

namespace com::github::nimelo {
  template<class T>
  class Factorization {
    public:
      Factorization(T const& value)
        : value_(value) {}
      
      auto get() -> std::vector<T> const{
        std::vector<T> factors = { 1 };
        auto value = T(value_);
        auto divisor = T() + 2;
        while(value != 1) {
          if(value % divisor == 0) {
            factors.push_back(divisor);
            value = value / divisor;
          } else {
            ++divisor;
          }
        }
        return factors;
      }
    private:
      T value_;
  };
}