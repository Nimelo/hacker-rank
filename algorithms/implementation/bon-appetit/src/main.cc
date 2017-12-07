#include <iostream>
#include <vector>
#include <cstddef>

#include "BillSplitChecker.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, k;
  cin >> n >> k;
  
  size_t i = 0;
  vector<size_t> prices(n);
  while(i < n && cin >> prices[i++]);

  size_t b;
  cin >> b;

  BillSplitChecker<size_t> bsc(prices);
  auto difference = bsc.check(k, b);

  cout << (difference == 0 ? "Bon Appetit" : to_string(difference)) << endl;

  return 0;
}