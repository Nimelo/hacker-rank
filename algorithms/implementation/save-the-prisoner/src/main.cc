#include <iostream>
#include <vector>
#include <cstdint>

#include "CandiesDistributor.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t t, n, m, s;
  CandiesDistributor checker;
  cin >> t;

  while(t--) {
    cin >> n >> m >> s;
    cout << checker.warn_prisoner(n, m, s) << endl;
  }

  return 0;
}