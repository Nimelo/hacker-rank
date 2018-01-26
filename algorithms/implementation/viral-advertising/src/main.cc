#include <iostream>
#include <cstddef>

#include "AdvertisingPredictor.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t day;
  cin >> day;

  cout << AdvertisingPredictor().predict(day) << endl;

  return 0;
}