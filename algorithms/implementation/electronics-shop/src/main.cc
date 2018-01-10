#include <iostream>
#include <vector>
#include <cstddef>

#include "PriceOptimiser.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, m, money;
  cin >> money >> n >> m;

  vector<size_t> keyboard_prices(n);
  vector<size_t> drive_prices(m);

  while(n > 0 && cin >> keyboard_prices[--n]);
  while(m > 0 && cin >> drive_prices[--m]);

  PriceOptimiser po(drive_prices, keyboard_prices);

  cout << po.optimise(money) << endl;

  return 0;
}