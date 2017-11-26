#pragma once

#include <vector>
#include <tuple>
#include <cstddef>
#include <algorithm>

namespace com::github::nimelo {
  class FruitFallCalculator {
    public:
      FruitFallCalculator(
        int house_start_pos,
        int house_end_pos,
        int apple_tree_pos,
        int orange_tree_pos)
      : house_start_pos_(house_start_pos),
        house_end_pos_(house_end_pos),
        apple_tree_pos_(apple_tree_pos),
        orange_tree_pos_(orange_tree_pos) {}
      
      std::tuple<long, long> getNumberOfFruitsFallenOnHouse(
        std::vector<int> const& apple_distances,
        std::vector<int> const& orange_distances
      ) {
        auto number_of_apples = numberOfItemsInRange(
          apple_tree_pos_,
          apple_distances
        );
        auto number_of_oranges = numberOfItemsInRange(
          orange_tree_pos_,
          orange_distances
        );

        return { number_of_apples, number_of_oranges };
      }
    private:
      long numberOfItemsInRange(
        int initial_pos,
        std::vector<int> const& distances) {
          long in_range = 0;

          std::for_each(
            distances.begin(),
            distances.end(),
            [&, this](int distance) {
              int final_pos = initial_pos + distance;
              if(final_pos <= house_end_pos_ && final_pos >= house_start_pos_) {
                ++in_range;
              }
            });

          return in_range;
        }
      int house_start_pos_;
      int house_end_pos_;
      int apple_tree_pos_;
      int orange_tree_pos_;
  };
}