#pragma once

#include <vector>
#include <cstddef>
#include <numeric>
#include <algorithm>

namespace com::github::nimelo {
template<class T>
class BillSplitChecker {
public:
  BillSplitChecker(std::vector<T> const& meal_prices)
    : meal_prices_{meal_prices} {}
  auto check(size_t const& ignored_meal, T const& share_to_pay) -> T const { 
    auto total_price = std::accumulate(
      meal_prices_.begin(),
      meal_prices_.end(),
      T()
    );

    if (ignored_meal < meal_prices_.size()) {
      total_price -= meal_prices_.at(ignored_meal);
    }

    return share_to_pay - total_price / 2;
  }

private:
  std::vector<T> meal_prices_;
};
}