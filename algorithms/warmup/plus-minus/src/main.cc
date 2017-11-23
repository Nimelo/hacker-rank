#include <iostream>

#include "VectorFractions.hpp"
#include <vector>
#include <tuple>

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  int n;
  cin >> n;
  vector<int> numbers(n);
  while(cin >> numbers[--n]) ;

  VectorFractions<int> vf(numbers);
  auto fractions = vf.getFractions();

  cout << get<2>(fractions) << endl;
  cout << get<0>(fractions) << endl;
  cout << get<1>(fractions) << endl;
  
  return 0;
}