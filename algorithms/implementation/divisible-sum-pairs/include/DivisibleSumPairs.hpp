#pragma once

#include <vector>
#include <cstddef>
#include <numeric>
#include <algorithm>

namespace com::github::nimelo {
template<class T>
class DivisibleSumPairs {
public:
  DivisibleSumPairs(std::vector<T> const& set)
    : set_{set} {}
  size_t get(T const& k) const { 
    std::vector<size_t> reminders(k);
    
    std::for_each(
      set_.begin(),
      set_.end(),
      [&](T const& value){
        ++reminders[value % k];
      });
    
    auto count = reminders[0] * (reminders[0] - 1) / 2;

    for(size_t i = 1; i < k / 2 + 1; ++i) {
      count += 
        reminders[i] *
        reminders[k - i];
    }

    if(k % 2 == 0) {
      auto to_remove = reminders[k/2] * reminders[k/2];
      auto to_add = reminders[k/2] * (reminders[k/2] - 1) / 2;
      count += to_add - to_remove;
    }

    return count;
  }

private:
  std::vector<T> set_;
};
}