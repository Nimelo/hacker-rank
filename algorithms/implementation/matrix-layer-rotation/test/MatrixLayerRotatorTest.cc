#define BOOST_TEST_MODULE MatrixLayerRotatorTest

#include "MatrixLayerRotator.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(MatrixLayerRotatorSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(SampleInput_1)
{
  // Arrange
  vector<vector<int>> matrix = {
    { 1, 2, 3, 4 },
    { 5, 6, 7, 8 },
    { 9, 10, 11, 12 },
    { 13, 14, 15, 16 }
  };

  size_t rot = 1;

  vector<vector<int>> expected_matrix = {
    { 2, 3, 4, 8 },
    { 1, 7, 11, 12 },
    { 5, 6, 10, 16 },
    { 9, 13, 14, 15 }
  };

  MatrixLayerRotator<int> mlr(matrix);
  // Act
  auto actual_matrix = mlr.rotate_reverse_clockwise(rot);

  // Assert
  BOOST_CHECK_EQUAL(expected_matrix.size(), actual_matrix.size());
  
  for(size_t i = 0; i < expected_matrix.size(); ++i) {
    BOOST_CHECK_EQUAL_COLLECTIONS(
      expected_matrix[i].begin(),
      expected_matrix[i].end(),
      actual_matrix[i].begin(),
      actual_matrix[i].end()
    );
  }
}

BOOST_AUTO_TEST_CASE(SampleInput_2)
{
  // Arrange
  vector<vector<int>> matrix = {
    { 1, 2, 3, 4 },
    { 5, 6, 7, 8 },
    { 9, 10, 11, 12 },
    { 13, 14, 15, 16 }
  };

  size_t rot = 2;

  vector<vector<int>> expected_matrix = {
    { 3, 4, 8, 12 },
    { 2, 11, 10, 16 },
    { 1, 7, 6, 15 },
    { 5, 9, 13, 14 }
  };

  MatrixLayerRotator<int> mlr(matrix);
  // Act
  auto actual_matrix = mlr.rotate_reverse_clockwise(rot);

  // Assert
  BOOST_CHECK_EQUAL(expected_matrix.size(), actual_matrix.size());
  
  for(size_t i = 0; i < expected_matrix.size(); ++i) {
    BOOST_CHECK_EQUAL_COLLECTIONS(
      expected_matrix[i].begin(),
      expected_matrix[i].end(),
      actual_matrix[i].begin(),
      actual_matrix[i].end()
    );
  }
}

BOOST_AUTO_TEST_CASE(SampleInput_3)
{
  // Arrange
  vector<vector<int>> matrix = {
    { 1, 1 },
    { 1, 1 }
  };

  size_t rot = 3;

  vector<vector<int>> expected_matrix = {
    { 1, 1 },
    { 1, 1 }
  };

  MatrixLayerRotator<int> mlr(matrix);
  // Act
  auto actual_matrix = mlr.rotate_reverse_clockwise(rot);

  // Assert
  BOOST_CHECK_EQUAL(expected_matrix.size(), actual_matrix.size());
  
  for(size_t i = 0; i < expected_matrix.size(); ++i) {
    BOOST_CHECK_EQUAL_COLLECTIONS(
      expected_matrix[i].begin(),
      expected_matrix[i].end(),
      actual_matrix[i].begin(),
      actual_matrix[i].end()
    );
  }
}

BOOST_AUTO_TEST_CASE(SampleInput_4)
{
  // Arrange
  vector<vector<int>> matrix = {
    { 1, 2, 3, 4 },
    { 7, 8, 9, 10 },
    { 13, 14, 15, 16 },
    { 19, 20, 21, 22 },
    { 25, 26, 27, 28 }
  }; 

  size_t rot = 7;

  vector<vector<int>> expected_matrix = {
    { 28, 27, 26, 25 },
    { 22, 9, 15, 19 },
    { 16, 8, 21, 13 },
    { 10, 14, 20, 7 },
    { 4, 3, 2, 1 }
  };

  MatrixLayerRotator<int> mlr(matrix);
  // Act
  auto actual_matrix = mlr.rotate_reverse_clockwise(rot);

  // Assert
  BOOST_CHECK_EQUAL(expected_matrix.size(), actual_matrix.size());
  
  for(size_t i = 0; i < expected_matrix.size(); ++i) {
    BOOST_CHECK_EQUAL_COLLECTIONS(
      expected_matrix[i].begin(),
      expected_matrix[i].end(),
      actual_matrix[i].begin(),
      actual_matrix[i].end()
    );
  }
}

BOOST_AUTO_TEST_SUITE_END()