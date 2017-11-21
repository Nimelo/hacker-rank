#include <iostream>

#include "Summation.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n;
  cin >> n;
  vector<int> summands(n);
  while(n >= 0 && cin >> summands[--n]) ;

  Summation<int> summation(summands);
  cout << summation.get() << endl;

  return 0;
}