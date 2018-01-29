#pragma once

#include <cstddef>

namespace com::github::nimelo {
  class CandiesDistributor {
    public:
    auto warn_prisoner(
      size_t const& number_of_prisoners,
      size_t const& number_of_sweets,
      size_t const& starting_one_based_index
    ) const -> size_t {
      auto starting_zero_based_index = starting_one_based_index - 1;
      auto zero_based_prisoner_id = (starting_zero_based_index + number_of_sweets - 1) % number_of_prisoners;
      return zero_based_prisoner_id + 1;
    }
  };
}