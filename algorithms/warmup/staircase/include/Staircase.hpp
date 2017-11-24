#pragma once

#include <cstddef>
#include <ostream>
#include <string>

namespace com::github::nimelo {
  class Staircase {
    public:
      Staircase(size_t n) : n_(n) {}
      friend std::ostream& operator<< (std::ostream & stream, Staircase const& staircase) {
          auto n = staircase.n_;
          std::string row(n, ' ');
          
          while(n) {
            row[--n] = '#';
            stream << row << std::endl;
          }

          return stream;
      }
    private:
      size_t n_;
  };
}