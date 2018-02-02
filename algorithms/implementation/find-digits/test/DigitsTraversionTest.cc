#define BOOST_TEST_MODULE DigitsTraversionTest

#include "DigitsTraversion.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(DigitsTraversionSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
  // Arrange
  size_t number = 12, expected = 2;

  DigitsTraversion checker(number);
  
  // Act
  auto actual = checker.get_evenly_divisible_count();

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
  // Arrange
  size_t number = 1012, expected = 3;

  DigitsTraversion checker(number);
  
  // Act
  auto actual = checker.get_evenly_divisible_count();

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_SUITE_END()