#pragma once

#include <vector>
#include <tuple>
#include <cstddef>
#include <algorithm>

namespace com::github::nimelo {
  class MagicBeverageEstimator {
    public:
      MagicBeverageEstimator(std::vector<int> const& hurdle_heights)
        : hurdle_heights_{hurdle_heights} {}

      auto estimate(int const& jump_height) const -> size_t {
        auto max_hurdle_height = *std::max_element(
          hurdle_heights_.begin(),
          hurdle_heights_.end());
        
        return jump_height < max_hurdle_height ?
          max_hurdle_height - jump_height : 0;
      }

    private:
      std::vector<int> hurdle_heights_;
  };
}