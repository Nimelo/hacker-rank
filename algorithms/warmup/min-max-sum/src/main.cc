#include <iostream>
#include <vector>
#include <tuple>

#include "MinMaxSum.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  int n = 5;
  
  vector<unsigned long long> numbers(n);
  while(cin >> numbers[--n]);

  MinMaxSum<unsigned long long> min_max_sum(numbers);
  auto min_max = min_max_sum.get<unsigned long long>(4);
  
  cout << get<0>(min_max) << ' ' << get<1>(min_max) << endl;

  return 0;
}