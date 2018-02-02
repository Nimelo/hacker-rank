#pragma once

#include <string>
#include <algorithm>
#include <cstddef>

namespace com::github::nimelo {
  class DigitsTraversion {
    public:
      DigitsTraversion(size_t const& number)
        : number_(number) {}
      
      auto get_evenly_divisible_count()
       const -> size_t {
        size_t count = 0;
        auto str_number = std::to_string(number_);
        std::for_each(
          str_number.begin(),
          str_number.end(),
          [&](char const& digit){
            if(digit != zero_char_) {
              count += number_ % (digit - zero_char_) == 0 ? 1 : 0;
            }
          });
        
        return count;
      }

    private:
      static constexpr char zero_char_ = '0';
      size_t number_;
  };
}