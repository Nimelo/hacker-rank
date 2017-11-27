#include <iostream>
#include <vector>
#include <cstdint>

#include "LocationChecker.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  LocationType x1, x2;
  MoveRatioType v1, v2;

  cin >> x1 >> v1 >> x2 >> v2;

  LocationChecker lc(x1, v1, x2, v2);
  auto result = lc.willMeet();

  cout << (result ? "YES" : "NO") << endl;

  return 0;
}