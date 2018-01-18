#include <iostream>
#include <vector>
#include <cstdint>

#include "WordSelection.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t letters = 26, index = 0;


  vector<unsigned int> letter_heights(letters);

  while(index < letters && cin >> letter_heights[index++]);

  string word;
  cin >> word;

  cout << WordSelection(letter_heights).get_area(word) << endl;

  return 0;
}