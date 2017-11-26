#include <iostream>
#include <vector>
#include <cstdint>

#include "FruitFallCalculator.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;
    
  int house_sp, house_ep, apple_p, orange_p;
  int apple_n, orange_n;

  cin >> house_sp >> house_ep >> apple_p >> orange_p;
  cin >> apple_n >> orange_n;

  vector<int> apple_distances(apple_n);
  vector<int> orange_distances(orange_n);

  while(apple_n > 0 && cin >> apple_distances[--apple_n]);
  while(orange_n > 0 && cin >> orange_distances[--orange_n]);

  FruitFallCalculator ffc(
    house_sp,
    house_ep,
    apple_p,
    orange_p
  );

  auto tuple = ffc.getNumberOfFruitsFallenOnHouse(
    apple_distances,
    orange_distances
  );

  cout << get<0>(tuple) << endl << get<1>(tuple) << endl;

  return 0;
}