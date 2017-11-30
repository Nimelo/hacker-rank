#include <iostream>
#include <vector>
#include <cstdint>
#include <tuple>

#include "GameRecordsAnalyser.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, i = 0;
  cin >> n;
  
  vector<size_t> scores(n);
  while(cin >> scores[i++]);

  GameRecordsAnalyser<size_t> gra(scores);
  auto stats = gra.get();

  cout << get<1>(stats) << ' ' << get<0>(stats) << endl;

  return 0;
}