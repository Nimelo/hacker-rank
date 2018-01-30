#include <iostream>
#include <vector>
#include <cstdint>

#include "CircularArrayRotation.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, k, q, index = 0;

  cin >> n >> k >> q;
  vector<size_t> array(n);

  while(index < n && cin >> array[index++]);
  CircularArrayRotation<size_t> checker(array);

  while(q--) {
    size_t m;
    cin >> m;
    cout << checker.get_at_after_rotation(m, k) << endl;
  }

  return 0;
}