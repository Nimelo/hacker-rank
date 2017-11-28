#pragma once

#include <set>
#include <algorithm>

#include "GCD.hpp"
#include "LCM.hpp"

namespace com::github::nimelo {
  template<class T>
  class BetweenTwoSets {
    public:
      BetweenTwoSets(
        std::vector<T> const& divisors,
        std::vector<T> const& multiplications)
        : divisors_(divisors),
          multiplications_(multiplications) {}
      
      auto get() const -> std::set<T> {
        auto lcm = LCM<T>(divisors_).get();
        auto gcd = GCD<T>(multiplications_).get();

        if (lcm > gcd || gcd % lcm != 0) {
          return {};
        } else {
          std::set<T> result = {};

          for(T i = lcm; i <= gcd; ++i) {
              if(i % lcm == 0 && gcd % i == 0) {
                result.insert(i);
              }
          }

          return result;
        }
      }
    private:
      std::vector<T> divisors_;
      std::vector<T> multiplications_;
  };
}