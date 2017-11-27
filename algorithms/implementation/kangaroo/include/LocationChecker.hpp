#pragma once

namespace com::github::nimelo {

  typedef unsigned short LocationType;
  typedef unsigned short MoveRatioType;
  class LocationChecker {
    public:
      LocationChecker(
        LocationType first_pos,
        MoveRatioType first_move_ratio,
        LocationType second_pos,
        MoveRatioType second_move_ratio
      ) :
        first_pos_(first_pos),
        first_move_ratio_(first_move_ratio),
        second_pos_(second_pos),
        second_move_ratio_(second_move_ratio) {}

      auto willMeet() const -> bool {
        if(first_move_ratio_ == second_move_ratio_) {
          return first_pos_ == second_pos_;
        } else {
          short pos_difference = first_pos_ - second_pos_;
          short move_difference = second_move_ratio_ - first_move_ratio_;
          
          double division = static_cast<double>(pos_difference) / move_difference;
          return pos_difference % move_difference == 0 && division > 0;
        }
      }

    private:
      LocationType first_pos_;
      LocationType second_pos_;
      MoveRatioType first_move_ratio_;
      MoveRatioType second_move_ratio_;
  };
}