#include <iostream>
#include <vector>
#include <cstddef>

#include "MaxCounter.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  unsigned int n;
  cin >> n;
  
  vector<unsigned long long> candle_heights(n);
  while(cin >> candle_heights[--n]);

  MaxCounter<unsigned long long> mc(candle_heights);
  cout << mc.get() << endl;

  return 0;
}