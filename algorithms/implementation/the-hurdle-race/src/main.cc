#include <iostream>
#include <vector>
#include <cstdint>

#include "MagicBeverageEstimator.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, k;
  cin >> n >> k;

  vector<int> hurdle_heights(n);

  while(n > 0 && cin >> hurdle_heights[--n]);
  MagicBeverageEstimator mbe(hurdle_heights);

  cout << mbe.estimate(k) << endl;

  return 0;
}