#pragma once

#include <cstddef>

namespace com::github::nimelo {
  class AdvertisingPredictor {
    public:
      auto predict(size_t const& day) const -> size_t {
        size_t last_likers = 2, day_copy = day, sum_likers = last_likers;

        while(--day_copy) {
          last_likers *= 3;
          last_likers /= 2;
          sum_likers += last_likers;
        }

        return sum_likers;
      }
  };
}