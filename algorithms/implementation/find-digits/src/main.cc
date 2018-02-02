#include <iostream>
#include <vector>
#include <cstdint>

#include "DigitsTraversion.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t t, n;
  cin >> t;
  
  while(t--) {
    cin >> n;
    cout << DigitsTraversion(n).get_evenly_divisible_count() << endl;
  }

  return 0;
}