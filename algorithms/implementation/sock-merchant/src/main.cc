#include <iostream>
#include <vector>
#include <cstddef>

#include "SockMerchant.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n;
  cin >> n;

  vector<size_t> socks(n);

  while(n > 0 && cin >> socks[--n]);
  
  SockMerchant<size_t> sm(socks);
  cout << sm.get_total_pairs() << endl;

  return 0;
}