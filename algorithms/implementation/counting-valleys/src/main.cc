#include <iostream>
#include <vector>
#include <cstddef>

#include "ValleyCounter.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n = 0, i = 0;
  cin >> n;
  
  vector<char> topography(n);

  while(i < n && cin >> topography[++i]);

  ValleyCounter vc(topography);

  cout << vc.get() << endl;

  return 0;
}