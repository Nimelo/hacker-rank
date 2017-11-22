#include <iostream>
#include <vector>
#include <cstddef>
#include <tuple>

#include "RatingComparator.hpp"

int main(int argc, char* args []) {
  using namespace com::github::nimelo;
  using namespace std;

  const size_t n = 3;
  vector<int> first(n);
  vector<int> second(n);

  for(auto &x : first) {
    cin >> x;
  }

  for(auto &x : second) {
    cin >> x;
  }

  RatingComparator<int> rc(first, second);
  auto result = rc.get();

  cout << get<0>(result) << " " << get<1>(result) << endl;
  
  return 0;
}