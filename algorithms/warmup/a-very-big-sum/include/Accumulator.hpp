#pragma once

#include <vector>
#include <numeric>

namespace com::github::nimelo {
  template<class E, class R>
  class Accumulator {
    public:
      Accumulator(std::vector<E> const& elements) : elements_(elements) {}
      R get() const { return std::accumulate(elements_.begin(), elements_.end(), R()); }
    private:
      std::vector<E> elements_;
  };
}