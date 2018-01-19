#include <iostream>
#include <vector>
#include <cstdint>

#include "ClassCancelationChecker.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t t, n, k;

  cin >> t;

  while(t-- > 0) {
    size_t index = 0;
    cin >> n >> k;
    vector<int> arrival_times(n);
    while(index < n && cin >> arrival_times[index++]);

    cout << (ClassCancelationChecker(arrival_times).is_canceled(k) ? "YES" : "NO") << endl;
  }

  return 0;
}