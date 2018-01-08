#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

#include "ForwardFlipper.hpp"
#include "BackwardFlipper.hpp"
#include "PageFlipperInterface.hpp"
#include "FlippingOptimizer.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, p;
  cin >> n >> p;
 
  vector<PageFlipperInterface*> flippers = { new BackwardFlipper(), new ForwardFlipper() };
  FlippingOptimizer optimizer(flippers);
  
  cout << optimizer.optimise(n, p) << endl;

  std::for_each(
    flippers.begin(),
    flippers.end(),
    [](PageFlipperInterface* flipper) {
      delete flipper;
    }
  );

  return 0;
}