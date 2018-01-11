#include <iostream>
#include <vector>
#include <string>
#include <cstddef>

#include "CatchDeterminator.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n = 0;
  cin >> n;

  vector<string> answers(3);
  answers[CatchDeterminator::CAT_A_WINS] = string("Cat A");
  answers[CatchDeterminator::CAT_B_WINS] = string("Cat B");
  answers[CatchDeterminator::MOUSE_WINS] = string("Mouse C");

  while(n--) {
      int cat_a_pos = 1, cat_b_pos = 2, mouse_pos = 3;
      cin >> cat_a_pos >> cat_b_pos >> mouse_pos;

      CatchDeterminator cd(cat_a_pos, cat_b_pos, mouse_pos);

      cout << answers[cd.determine()] << endl;
  }

  return 0;
}