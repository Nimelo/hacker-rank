#include <iostream>
#include <vector>
#include <cstdint>

#include "MatrixLayerRotator.hpp"

int main(int argc, char* argv []) {
  using namespace std;
  using namespace com::github::nimelo;

  size_t rows, columns, rot;
  cin >> rows >> columns >> rot;

  vector<vector<size_t>> matrix(rows, vector<size_t>(columns));

  for(size_t row = 0; row < rows; ++row)
    for(size_t column = 0; column < columns; ++column) 
      cin >> matrix[row][column];

  MatrixLayerRotator<size_t> mlr(matrix);

  auto rotated_matrix = mlr.rotate_reverse_clockwise(rot);

  for(auto const& row : rotated_matrix) {
    for(auto const& element : row) {
      cout << element << " ";
    }
    cout << endl;
  }

  return 0;
}