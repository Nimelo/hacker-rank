#include <iostream>
#include <cstddef>

#include "Staircase.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n;
  cin >> n;
  
  Staircase sc(n);
  cout << sc;

  return 0;
}