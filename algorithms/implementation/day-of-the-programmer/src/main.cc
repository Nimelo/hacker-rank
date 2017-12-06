#include <iostream>
#include <vector>
#include <cstddef>

#include "DayOfTheProgrammer.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t year;
  cin >> year;

  cout << DayOfTheProgrammer().get_256_day(year) << endl;

  return 0;
}