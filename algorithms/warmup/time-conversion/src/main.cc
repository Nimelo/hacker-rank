#include <iostream>
#include <string>
#include "TimeConversion.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  string input;
  cin >> input;
  
  TimeConversion tc(input);
  cout << tc.get() << endl;

  return 0;
}