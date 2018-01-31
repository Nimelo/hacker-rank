#define BOOST_TEST_MODULE SequenceEquationTest

#include "SequenceEquation.hpp"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(SequenceEquationSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
  // Arrange
  vector<int> sequence = { 2, 3, 1 };
  int value = 1;
  int expected = 2;

  SequenceEquation<int> checker(sequence);
  
  // Act
  auto actual = checker.return_composition_index(value);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
  // Arrange
  vector<int> sequence = { 2, 3, 1 };
  int value = 2;
  int expected = 3;

  SequenceEquation<int> checker(sequence);
  
  // Act
  auto actual = checker.return_composition_index(value);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_3)
{
  // Arrange
  vector<int> sequence = { 2, 3, 1 };
  int value = 3;
  int expected = 1;

  SequenceEquation<int> checker(sequence);
  
  // Act
  auto actual = checker.return_composition_index(value);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_SUITE_END()