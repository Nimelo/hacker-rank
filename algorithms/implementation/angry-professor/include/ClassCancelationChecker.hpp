#pragma once

#include <vector>
#include <algorithm>
#include <cstddef>

namespace com::github::nimelo {
  class ClassCancelationChecker {
    public:
      ClassCancelationChecker(std::vector<int> const& arrival_times)
        : arrival_times_{arrival_times} {}
      
      auto is_canceled(size_t const& cancelation_threshold) const -> bool {
        size_t non_late_arrivals = 0;
        std::for_each(
          arrival_times_.begin(),
          arrival_times_.end(),
          [&](int const& time) {
            if(time <= 0) {
              ++non_late_arrivals;
            }
          }
        );
        
        return non_late_arrivals < cancelation_threshold;
      }

    private:
      std::vector<int> arrival_times_;
  };
}