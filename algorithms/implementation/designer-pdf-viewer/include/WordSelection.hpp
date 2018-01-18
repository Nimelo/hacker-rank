#pragma once

#include <vector>
#include <algorithm>
#include <string>

namespace com::github::nimelo {
  class WordSelection {
    public:
      WordSelection(std::vector<unsigned int> const& letter_heights)
        : letter_heights_{letter_heights} {}
      
      auto get_area(std::string const& word) const -> size_t {
        auto highest_letter = *std::max_element(
          word.begin(),
          word.end(),
          [&](char const& lhs, char const& rhs) {
            return letter_heights_[lhs - 'a'] < letter_heights_[rhs - 'a'];
          }
        );

        return letter_heights_[highest_letter - 'a']
         * WordSelection::letter_width * word.size();
      }

    private:
      std::vector<unsigned int> letter_heights_;
      static unsigned int letter_width;
  };

  unsigned int WordSelection::letter_width = 1;
}