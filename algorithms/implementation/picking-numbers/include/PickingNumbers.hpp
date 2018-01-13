#pragma once

#include <vector>
#include <cmath>
#include <algorithm>
#include <cstddef>

namespace com::github::nimelo {
  class PickingNumbers {
    public:
      PickingNumbers(std::vector<int> const& numbers) 
        : numbers_{numbers} {}

      auto count() const -> size_t {
        if(numbers_.size() < 1)
          return 0;

        auto max_number = *std::max_element(numbers_.begin(), numbers_.end());
        std::vector<size_t> absolute_difference_to_max(100 + 1);
        
        for(auto const& number : numbers_) {
          ++absolute_difference_to_max[abs(number - max_number)];
        }

        size_t max_matches = 0;
        for(auto const& number : numbers_) {
          auto difference_to_max = max_number - number;
          size_t matches = 0;
          
          matches += absolute_difference_to_max[difference_to_max];
          matches += absolute_difference_to_max[difference_to_max + 1];

          max_matches = std::max(matches, max_matches);
        }

        return max_matches;
      }

    private:
      std::vector<int> numbers_;
  };
}