#define BOOST_TEST_MODULE PriceOptimiserTest

#include "PriceOptimiser.hpp"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(PriceOptimiserSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_01)
{
  // Arrange
  vector<size_t> drive_prices = { 3, 1 };
  vector<size_t> keyboard_prices = { 5, 2, 8 };
  size_t money = 10;
  signed long expected = 9;
  
  PriceOptimiser po(keyboard_prices, drive_prices);

  // Act
  auto actual = po.optimise(money);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_02)
{
  // Arrange
  vector<size_t> drive_prices = { 4 };
  vector<size_t> keyboard_prices = { 5 };
  size_t money = 5;
  signed long expected = -1;
  
  PriceOptimiser po(keyboard_prices, drive_prices);

  // Act
  auto actual = po.optimise(money);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_SUITE_END()