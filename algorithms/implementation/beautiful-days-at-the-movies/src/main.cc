#include <iostream>
#include <cstddef>

#include "BeautifulDayPredictor.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t start_day, end_day, divisor;

  cin >> start_day >> end_day >> divisor;

  cout << BeautifulDayPredictor(start_day, end_day).count(divisor) << endl;

  return 0;
}