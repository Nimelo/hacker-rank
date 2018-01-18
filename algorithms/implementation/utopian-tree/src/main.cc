#include <iostream>
#include <vector>
#include <cstdint>

#include "HeightPredictor.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
  
  size_t t, n;
  cin >> t;
  while(t-- > 0) {
    cin >> n;
    cout << HeightPredictor(n).predict() << endl;
  }

  return 0;
}