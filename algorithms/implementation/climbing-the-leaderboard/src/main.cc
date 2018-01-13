#include <iostream>
#include <vector>
#include <cstddef>

#include "DenseRanking.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;

  size_t scores_count, attempts_count;
  size_t attempt;
  cin >> scores_count;

  vector<size_t> scores(scores_count);
  while(scores_count > 0 && cin >> scores[--scores_count]);

  DenseRanking dr(scores);

  cin >> attempts_count;

  while(attempts_count > 0) {
    cin >> attempt;
    cout << dr.predict_rank(attempt) << endl;
    --attempts_count;
  }

  return 0;
}