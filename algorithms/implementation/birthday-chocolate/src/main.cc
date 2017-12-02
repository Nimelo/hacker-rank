#include <iostream>
#include <vector>
#include <cstdint>

#include "ChocolateDistributor.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, i = 0;
  cin >> n;
  
  vector<size_t> bars(n);
  while(i < n && cin >> bars[i++]);

  size_t m, d;
  cin >> d >> m;

  ChocolateDistributor<size_t> cd(bars);
  cout << cd.get(m, d) << endl;

  return 0;
}