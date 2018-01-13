#include <iostream>
#include <vector>
#include <cstdint>

#include "PickingNumbers.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;

  size_t size;
  cin >> size;
  vector<int> numbers(size);

  while(cin >> numbers[--size]);

  PickingNumbers pc(numbers);

  cout << pc.count() << endl;

  return 0;
}