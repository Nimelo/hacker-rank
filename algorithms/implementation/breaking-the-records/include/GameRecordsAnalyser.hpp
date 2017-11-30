#pragma once

#include <vector>
#include <tuple>
#include <algorithm>

namespace com::github::nimelo {
  template<class T>
  class GameRecordsAnalyser {
    public:
      GameRecordsAnalyser(std::vector<T> const& records) 
        : records_{records} {
          if(records_.size() == 0) {
            records_.push_back(T());
          }
        } 
      
      auto get() -> std::tuple<size_t, size_t> const { 
        size_t best_scores_count = 0, worst_scores_count = 0;
        T min, max;
        min = max = records_[0];
        std::for_each(
          records_.begin(),
          records_.end(),
          [&](T const& value) {
            if(value > max) {
              ++best_scores_count;
              max = value;
            }
            else if(value < min) {
              ++worst_scores_count;
              min = value;
            }
          }
        );

        return { worst_scores_count, best_scores_count };
      }
    private:
      std::vector<T> records_;
  };
}