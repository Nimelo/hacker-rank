#define BOOST_TEST_MODULE MatrixLayerRotationIndexMapperTest

#include "MatrixLayerRotationIndexMapper.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(MatrixLayerRotationIndexMapperSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(SampleInput_1)
{
  // Arrange
  size_t rows = 5, cols = 4;
  size_t row = 0, col = 0;
  size_t expected_row = 1, expected_col = 0;

  // Act
  auto actual = MatrixLayerRotationIndexMapper(rows, cols).map(row, col);

  // Assert
  BOOST_CHECK_EQUAL(std::get<0>(actual), expected_row);
  BOOST_CHECK_EQUAL(std::get<1>(actual), expected_col);
}

BOOST_AUTO_TEST_CASE(SampleInput_2)
{
  // Arrange
  size_t rows = 5, cols = 4;
  size_t row = 1, col = 3;
  size_t expected_row = 0, expected_col = 3;

  // Act
  auto actual = MatrixLayerRotationIndexMapper(rows, cols).map(row, col);

  // Assert
  BOOST_CHECK_EQUAL(std::get<0>(actual), expected_row);
  BOOST_CHECK_EQUAL(std::get<1>(actual), expected_col);
}


BOOST_AUTO_TEST_CASE(SampleInput_3)
{
  // Arrange
  size_t rows = 5, cols = 4;
  size_t row = 1, col = 1;
  size_t expected_row = 1, expected_col = 1;
  size_t rotations = 6; 

  // Act
  auto actual = MatrixLayerRotationIndexMapper(rows, cols).map(row, col, rotations);

  // Assert
  BOOST_CHECK_EQUAL(std::get<0>(actual), expected_row);
  BOOST_CHECK_EQUAL(std::get<1>(actual), expected_col);
}

BOOST_AUTO_TEST_CASE(SampleInput_4)
{
  // Arrange
  size_t rows = 5, cols = 4;
  size_t row = 1, col = 1;
  size_t expected_row = 1, expected_col = 1;
  size_t rotations = 6 * 2; 

  // Act
  auto actual = MatrixLayerRotationIndexMapper(rows, cols).map(row, col, rotations);

  // Assert
  BOOST_CHECK_EQUAL(std::get<0>(actual), expected_row);
  BOOST_CHECK_EQUAL(std::get<1>(actual), expected_col);
}

BOOST_AUTO_TEST_CASE(SampleInput_5)
{
  // Arrange
  size_t rows = 5, cols = 4;
  size_t row = 0, col = 0;
  size_t expected_row = 4, expected_col = 3;
  size_t rotations = 7; 

  // Act
  auto actual = MatrixLayerRotationIndexMapper(rows, cols).map(row, col, rotations);

  // Assert
  BOOST_CHECK_EQUAL(std::get<0>(actual), expected_row);
  BOOST_CHECK_EQUAL(std::get<1>(actual), expected_col);
}

BOOST_AUTO_TEST_SUITE_END()