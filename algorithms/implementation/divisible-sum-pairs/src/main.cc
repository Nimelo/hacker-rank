#include <iostream>
#include <vector>
#include <cstddef>

#include "DivisibleSumPairs.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, k;
  cin >> n >> k;
  
  size_t i = 0;
  vector<size_t> numbers(n);
  while(cin >> numbers[i++]);

  DivisibleSumPairs<size_t> dsp(numbers);
  cout << dsp.get(k) << endl;

  return 0;
}