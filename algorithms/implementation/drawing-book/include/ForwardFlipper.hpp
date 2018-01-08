#pragma once

#include "PageFlipperInterface.hpp"
#include <cstddef>

namespace com::github::nimelo {
  class ForwardFlipper : public PageFlipperInterface {
    public:      
      virtual auto distance(
        size_t const& total_number_pages,
        size_t const& desired_page_number
      ) const -> size_t {
        return desired_page_number / 2;
      }    
  };
}