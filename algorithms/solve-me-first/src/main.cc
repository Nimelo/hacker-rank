#include <iostream>

#include "Adder.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  int num1, num2;
  cin >> num1 >> num2;
  auto adder = Adder<int>(num1, num2);
  cout << adder.get();

  return 0;
}