#pragma once

#include <vector>
#include <tuple>
#include <cstddef>
#include <algorithm>

namespace com::github::nimelo {
  class ValleyCounter {
    public:
      ValleyCounter(std::vector<char> const& topography)
        : topography_{topography} {}
      
      auto get() const -> size_t {
        size_t valleys = 0;
        long level = 0;

        std::for_each(
          topography_.begin(),
          topography_.end(),
          [&](char const& step) {
            long next_level = level;

            if(step == ValleyCounter::UPHILL) {
              ++next_level;
            } else if (step == ValleyCounter::DOWNHILL) {
              --next_level;
            }

            if (level == 0 && next_level == -1) {
              ++valleys;
            }

            level = next_level;
          }
        );

        return valleys;
      }

    private:
      static const char UPHILL, DOWNHILL;
      std::vector<char> topography_;
  };

  const char ValleyCounter::UPHILL = 'U';
  const char ValleyCounter::DOWNHILL = 'D';
}