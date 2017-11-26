#include <iostream>
#include <vector>
#include <cstdint>

#include "GradingPolicy.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, i = 0;
  cin >> n;
  
  vector<uint32_t> grades(n);
  while(cin >> grades[i++]);

  GradingPolicy gp;
  auto final_grades = gp.get(grades);

  for(auto grade : final_grades) {
    cout << grade << endl;
  }

  return 0;
}