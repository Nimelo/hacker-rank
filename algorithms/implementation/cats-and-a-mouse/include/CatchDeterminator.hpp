#pragma once

#include <cmath>

namespace com::github::nimelo {
  class CatchDeterminator {
    public:
      CatchDeterminator(
        int cat_a_pos,
        int cat_b_pos,
        int mouse_pos) 
      : cat_a_pos_(cat_a_pos),
        cat_b_pos_(cat_b_pos),
        mouse_pos_(mouse_pos) {}

      auto determine() const -> int {
        auto cat_a_mouse_distance = abs(cat_a_pos_ - mouse_pos_);
        auto cat_b_mouse_distance = abs(cat_b_pos_ - mouse_pos_);
        if (cat_a_mouse_distance > cat_b_mouse_distance) {
          return CAT_B_WINS;
        } else if (cat_a_mouse_distance < cat_b_mouse_distance) {
          return CAT_A_WINS;
        }
        return MOUSE_WINS;
      }

      static int CAT_A_WINS;
      static int CAT_B_WINS;
      static int MOUSE_WINS;
    private:
      int cat_a_pos_;
      int cat_b_pos_;
      int mouse_pos_;
  };

  int CatchDeterminator::CAT_A_WINS = 0;
  int CatchDeterminator::CAT_B_WINS = 1;
  int CatchDeterminator::MOUSE_WINS = 2;
}