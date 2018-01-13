#include <iostream>
#include <vector>
#include <cstdint>

#include "MagicSquareFormer.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;

  size_t size = 9;
  vector<int> magic_square(size);

  for(auto & number : magic_square) {
    cin >> number;
  }

  MagicSquareFormer msf(magic_square);

  cout << msf.cost() << endl;

  return 0;
}