#pragma once

#include <vector>
#include <set>
#include <algorithm>
#include <cstddef>

namespace com::github::nimelo {
  class DenseRanking {
    public:
      DenseRanking(std::vector<size_t> const& scores) {
        std::vector<size_t> copy = scores;
        
        std::sort(
          copy.begin(),
          copy.end());

        size_t rank = 1;
        auto it_current = copy.rbegin();
        auto it_next = std::next(it_current);
        while(it_current != copy.rend()
          && it_next != copy.rend()) {
          
          dense_scores_.push_back({*it_current, rank});

          if(*it_current != *it_next) {
            ++rank;
          }

          it_current = it_next;
          it_next = std::next(it_next);
        }

        if(it_current != copy.rend()) {
          dense_scores_.push_back({*it_current, rank});
        }
      }

      auto predict_rank(size_t const& score) -> size_t {
        return predict_ranks({score})[0];
      }

      auto predict_ranks(std::vector<size_t> const& scores) -> std::vector<size_t> {
        std::vector<size_t> rank_predictions = { };

        for(auto const& score : scores) {
          auto upper_bound = std::upper_bound(
            dense_scores_.begin(),
            dense_scores_.end(),
            ValueRankPair {score, 0}, 
            [&](ValueRankPair const& lhs, ValueRankPair const& rhs) {
              return lhs.value >= rhs.value;
            }
          );
          auto rank = upper_bound == dense_scores_.end() ? 
            dense_scores_[dense_scores_.size() - 1].rank + 1 :
            (*upper_bound).rank;
          
          rank_predictions.push_back(rank);
        }

        return rank_predictions;
      }

    private:
      struct ValueRankPair {
        size_t value;
        size_t rank;
      };
      std::vector<ValueRankPair> dense_scores_;
  };
}