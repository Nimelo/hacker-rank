#pragma once

#include "PageFlipperInterface.hpp"
#include <cstddef>
#include <cmath>

namespace com::github::nimelo {
  class BackwardFlipper : public PageFlipperInterface {
    public:      
      virtual auto distance(
        size_t const& total_number_pages,
        size_t const& desired_page_number
      ) const -> size_t {
        auto desired_page_turn = desired_page_number / 2;
        auto total_number_pages_turn = total_number_pages / 2;
        return total_number_pages_turn - desired_page_turn;
      }    
  };
}