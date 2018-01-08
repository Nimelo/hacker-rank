#pragma once

#include <cstddef>

namespace com::github::nimelo {
  class PageFlipperInterface {
    public:
      virtual auto distance(
        size_t const& total_number_pages,
        size_t const& desired_page_number
      ) const -> size_t = 0;
      
    protected:
      size_t total_number_pages;
  };
}