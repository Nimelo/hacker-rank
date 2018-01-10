#pragma once

#include <vector>
#include <cstddef>
#include <algorithm>

namespace com::github::nimelo {
  class PriceOptimiser {
    public:
      PriceOptimiser(
        std::vector<size_t> const& drive_prices,
        std::vector<size_t> const& keyboard_prices)
        : drive_prices_{drive_prices},
          keyboard_prices_{keyboard_prices} {
            std::sort(
              drive_prices_.begin(),
              drive_prices_.end());
            std::sort(
              keyboard_prices_.begin(),
              keyboard_prices_.end(),
              [](const size_t lhs, const size_t rhs) {
                return lhs > rhs;
              });
        }

     auto optimise(size_t money_to_spend) const -> signed long {
      auto drives_it = drive_prices_.begin();
      signed long total = 0;

      for(auto keyboard_price : keyboard_prices_) {
        while(drives_it != drive_prices_.end()) {
          if (keyboard_price + *drives_it > money_to_spend) break;
          if (keyboard_price + *drives_it > total)
            total = keyboard_price + *drives_it;
          ++drives_it;
        }
      }

      return total == 0 ? -1 : total;
     }
    private:
      std::vector<size_t> drive_prices_;
      std::vector<size_t> keyboard_prices_;
  };
}