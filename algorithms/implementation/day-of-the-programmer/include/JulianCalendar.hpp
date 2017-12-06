#pragma once

#include <string>
#include <cstddef>

namespace com::github::nimelo {
  class JulianCalendar {
    public:
      auto get_256_day(size_t year) -> std::string const {
        std::string day_and_month = "13.09.";

        if(year % 4 == 0) {
            day_and_month = "12.09.";
        }
        
        return day_and_month + std::to_string(year);
      }
  };
}