#pragma once

#include "PageFlipperInterface.hpp"
#include <cstddef>
#include <vector>
#include <numeric>
#include <limits>

namespace com::github::nimelo {
  class FlippingOptimizer {
    public:      
      FlippingOptimizer(std::vector<PageFlipperInterface*> const& flippers)
       : flippers_{flippers} {};

      auto optimise(
        size_t const& pages_number,
        size_t const& desired_page_number
      ) const -> size_t {
        return std::accumulate(
          flippers_.begin(),
          flippers_.end(),
          std::numeric_limits<size_t>::max() ,
          [&](size_t const& current, PageFlipperInterface* const lhs) {
            return std::min(
              lhs->distance(pages_number, desired_page_number),
              current);
          }
        );
      }

    private: 
      std::vector<PageFlipperInterface*> flippers_;
  };
}