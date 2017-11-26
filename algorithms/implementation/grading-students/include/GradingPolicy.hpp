#pragma once

#include <vector>
#include <cstdint>

namespace com::github::nimelo {
  class GradingPolicy {
    public:
      GradingPolicy() = default;
      uint32_t get(uint32_t grade) const { 
        uint32_t final_grade = grade;
        
        if(grade >= 38) {
          final_grade = getNextMultipleOf5(grade);
        }

        return final_grade;
      }

      std::vector<uint32_t> get(std::vector<uint32_t> grades) const {
        std::vector<uint32_t> final_grades(grades.size());

        size_t i = 0;
        for(auto grade : grades) {
          final_grades[i++] = get(grade);
        }

        return final_grades;
      }
    private:
      uint32_t getNextMultipleOf5(uint32_t value) const {
        auto difference = value / 5 + 1;
        auto next_multiple_of_5 = 5 * difference;

        return next_multiple_of_5 - value < 3 ? next_multiple_of_5 : value;
      }
  };
}