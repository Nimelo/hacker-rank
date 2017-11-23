#pragma once

#include <vector>
#include <cstddef>
#include <tuple>
#include <algorithm>

namespace com::github::nimelo {
  typedef std::tuple<size_t, size_t, size_t> Stats;
  typedef std::tuple<double, double, double> Fractions;
  template<typename T>
  class VectorFractions {
    public:
      VectorFractions(std::vector<T> const& elements) : elements_(elements) {}

      Stats getStats() const {
        size_t positive = 0, negative = 0, zeros = 0;

        std::for_each(elements_.begin(), elements_.end(), [&positive, &negative, &zeros](const T & el) {
          if (el < 0)
            ++negative;
          else if (el == 0)
            ++zeros;
          else
            ++positive;
        });

        return std::make_tuple(negative, zeros, positive);
      }

      Fractions getFractions() const {
        auto stats = this->getStats();
        auto n = (double)elements_.size();
        return std::make_tuple(std::get<0>(stats) / n, std::get<1>(stats) / n, std::get<2>(stats) / n);
      }

    private:
      std::vector<T> elements_;
  };
}