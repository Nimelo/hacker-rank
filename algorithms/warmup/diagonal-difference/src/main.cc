#include <iostream>
#include <vector>
#include "DiagonalDifference.hpp"


int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  int n;
  cin >> n;
  vector<vector<int>> matrix(n, vector<int>(n));
  for(int i = 0; i < n; ++i)
    for(int j = 0; j < n; ++j)
      cin >> matrix[i][j];

  DiagonalDifference<int> dd(matrix);
  cout << dd.get() << endl;
  
  return 0;
}