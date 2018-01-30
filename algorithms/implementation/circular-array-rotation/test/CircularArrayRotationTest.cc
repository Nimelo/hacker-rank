#define BOOST_TEST_MODULE CircularArrayRotationTest

#include "CircularArrayRotation.hpp"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(CircularArrayRotationSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
  // Arrange
  vector<int> array = { 1, 2, 3 };
  size_t rotations = 2, index = 0;
  int expected = 2;

  CircularArrayRotation<int> checker(array);
  
  // Act
  auto actual = checker.get_at_after_rotation(index, rotations);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
  // Arrange
  vector<int> array = { 1, 2, 3 };
  size_t rotations = 2, index = 1;
  int expected = 3;

  CircularArrayRotation<int> checker(array);
  
  // Act
  auto actual = checker.get_at_after_rotation(index, rotations);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_3)
{
  // Arrange
  vector<int> array = { 1, 2, 3 };
  size_t rotations = 2, index = 2;
  int expected = 1;

  CircularArrayRotation<int> checker(array);
  
  // Act
  auto actual = checker.get_at_after_rotation(index, rotations);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_4)
{
  // Arrange
  vector<int> array = { 1, 2, 3, 4 };
  size_t rotations = 2, index = 3;
  int expected = 2;

  CircularArrayRotation<int> checker(array);
  
  // Act
  auto actual = checker.get_at_after_rotation(index, rotations);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_SUITE_END()