#include <iostream>
#include <vector>

#include "Accumulator.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
  
  int n;
  cin >> n;
  vector<long long> numbers(n);
  while(cin >> numbers[--n]) ;
  
  Accumulator<long long, long long> accumulator(numbers);
  cout << accumulator.get() << endl;

  return 0;
}