#include <iostream>
#include <vector>
#include <cstdint>

#include "CloudType.hpp"
#include "EnergyEstimator.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, leap, tmp, index = 0;
  cin >> n >> leap;

  vector<CloudType> config(n);
  while(index < n && cin >> tmp) {
    config[index++] = static_cast<CloudType>(tmp);
  }

  cout << EnergyEstimator(config).play(leap) << endl;

  return 0;
}