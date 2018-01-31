#include <iostream>
#include <vector>
#include <cstdint>

#include "SequenceEquation.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, index = 0;

  cin >> n;
  vector<size_t> sequence(n);
  while(index < n && cin >> sequence[index++]);

  SequenceEquation<size_t> sequence_equation(sequence);
  for(auto i = 1; i <= n; ++i) {
    cout << sequence_equation.return_composition_index(i) << endl;
  }

  return 0;
}