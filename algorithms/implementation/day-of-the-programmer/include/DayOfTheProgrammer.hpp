#pragma once

#include "GregorianCalendar.hpp"
#include "JulianCalendar.hpp"

#include <string>
#include <cstddef>

namespace com::github::nimelo {
  class DayOfTheProgrammer {
    public:
      auto get_256_day(size_t year) -> std::string const {
        if(year < 1918) {
          return JulianCalendar().get_256_day(year);
        } else if (year == 1918) {
          return "26.09." + std::to_string(year);
        } else {
          return GregorianCalendar().get_256_day(year);
        }
      }
  };
}