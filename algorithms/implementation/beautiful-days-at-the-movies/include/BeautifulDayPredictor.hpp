#pragma once

#include <cstddef>
#include <string>
#include <algorithm>
#include <cmath>

namespace com::github::nimelo {
  class BeautifulDayPredictor {
    public:
      BeautifulDayPredictor(
        size_t const& start_day,
        size_t const& end_day
      ) : start_day_(start_day),
          end_day_(end_day) {}
    
      auto count(size_t const& divisor) const -> size_t {
        size_t beautiful_days = 0;
        
        for(size_t current_day = start_day_; 
          current_day <= end_day_;
          ++current_day) {
          auto reversed_day = reverse(current_day);
          if(abs(current_day - reversed_day) % divisor == 0)
            ++beautiful_days;
        }

        return beautiful_days;
      }
    private:
      size_t reverse(size_t const& number) const {
        auto str_number = std::to_string(number);
        std::reverse(
          str_number.begin(),
          str_number.end()
        );

        return std::stoll(str_number);
      }
      size_t start_day_;
      size_t end_day_;
  };
}