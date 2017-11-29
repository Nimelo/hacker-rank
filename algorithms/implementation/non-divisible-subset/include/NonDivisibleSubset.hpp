#pragma once

#include <vector>
#include <cstddef>
#include <numeric>
#include <algorithm>

namespace com::github::nimelo {
template<class T>
class NonDivisibleSubset {
public:
  NonDivisibleSubset(std::vector<T> const& set)
    : set_{set} {}
  size_t get(T const& k) const { 
    std::vector<size_t> reminders(k);
    
    std::for_each(
      set_.begin(),
      set_.end(),
      [&](T const& value){
        ++reminders[value % k];
      });
    
    auto count = std::min(reminders[0], static_cast<size_t>(1));

    for(size_t i = 1; i < k / 2 + 1; ++i) {
      count += std::max(
        reminders[i],
        reminders[k - i]
      );
    }

    count = k % 2 == 0 ? count - reminders[k / 2] + std::min(reminders[k/2], static_cast<size_t>(1)) : count;

    return count;
  }

private:
  std::vector<T> set_;
};
}