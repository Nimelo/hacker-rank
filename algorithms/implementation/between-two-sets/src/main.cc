#include <iostream>
#include <vector>

#include "BetweenTwoSets.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  size_t n, m;
  cin >> n >> m;
  
  vector<int> A(n);
  vector<int> B(m);
  while(n > 0 && cin >> A[--n]);
  while(m > 0 && cin >> B[--m]);

  BetweenTwoSets<int> bts(A, B);
  auto result = bts.get();
  cout << result.size() << endl;

  return 0;
}