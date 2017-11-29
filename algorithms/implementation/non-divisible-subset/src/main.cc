#include <iostream>
#include <vector>
#include <cstddef>

#include "NonDivisibleSubset.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, k;
  cin >> n >> k;
  
  vector<size_t> numbers(n);
  while(cin >> numbers[--n]);

  NonDivisibleSubset<size_t> nds(numbers);
  cout << nds.get(k) << endl;

  return 0;
}