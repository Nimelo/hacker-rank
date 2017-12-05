#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstddef>

#include "MigratoryBirds.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n;
  cin >> n;
  
  vector<size_t> birds(n);
  while(cin >> birds[--n]);
  
  unordered_set<size_t> types = {1, 2, 3, 4, 5};
  MigratoryBirds<size_t> mb(types);
  
  cout << mb.get_common_type(birds) << endl;
    
  return 0;
}