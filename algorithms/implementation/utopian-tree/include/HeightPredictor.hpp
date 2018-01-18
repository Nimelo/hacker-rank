#pragma once

#include <cstddef>

namespace com::github::nimelo {
  class HeightPredictor {
    public:
      HeightPredictor(size_t const& cycles)
        : cycles_(cycles) {}
      
      auto predict() const -> size_t {
        size_t height = 1;
        for(size_t i = 1; i <= cycles_; ++i) {
          if(i % 2 == 0)
            ++height;
          else
            height <<= 1;
        }

        return height;
      }

      private:
        size_t cycles_;
  };
}