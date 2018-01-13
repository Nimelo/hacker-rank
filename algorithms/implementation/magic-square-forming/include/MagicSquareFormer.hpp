#pragma once

#include <vector>
#include <cmath>
#include <limits>

namespace com::github::nimelo {
  class MagicSquareFormer {
    public:
      MagicSquareFormer(std::vector<int> const& magic_square) 
        : magic_square_{magic_square} {}

      auto cost() const -> int {
        int min = std::numeric_limits<int>::max();;

        for(auto const& square : magic_square_combinations_) {
          int difference = 0;
          auto square_it = square.begin();
          auto magic_square_it = magic_square_.begin();
          while(square_it != square.end()
            && magic_square_it != magic_square_.end()) {
            difference += abs(*square_it - *magic_square_it);
            ++square_it;
            ++magic_square_it;
          }
          min = std::min(difference, min);
        }

        return min;
      }

    private:
      static std::vector<std::vector<int>> magic_square_combinations_;
      std::vector<int> magic_square_;
  };

  std::vector<std::vector<int>> MagicSquareFormer::magic_square_combinations_ = {
    { 8, 1, 6, 3, 5, 7, 4, 9, 2 },
    { 4, 3, 8, 9, 5, 1, 2, 7, 6 },
    { 2, 9, 4, 7, 5, 3, 6, 1, 8 },
    { 6, 7, 2, 1, 5, 9, 8, 3, 4 },
    { 6, 1, 8, 7, 5, 3, 2, 9, 4 },
    { 8, 3, 4, 1, 5, 9, 6, 7, 2 },
    { 4, 9, 2, 3, 5, 7, 8, 1, 6 },
    { 2, 7, 6, 9, 5, 1, 4, 3, 8 }
  };
}