#define BOOST_TEST_MODULE AdvertisingPredictorTest

#include "AdvertisingPredictor.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(AdvertisingPredictorSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(Day_3)
{
  // Arrange
  size_t day = 3, expected_likers = 9;

  AdvertisingPredictor ap;
  // Act
  auto actual_likers = ap.predict(day);

  // Assert
  BOOST_CHECK_EQUAL(expected_likers, actual_likers);
}

BOOST_AUTO_TEST_CASE(Day_1)
{
  // Arrange
  size_t day = 1, expected_likers = 2;

  AdvertisingPredictor ap;
  // Act
  auto actual_likers = ap.predict(day);

  // Assert
  BOOST_CHECK_EQUAL(expected_likers, actual_likers);
}

BOOST_AUTO_TEST_CASE(Day_2)
{
  // Arrange
  size_t day = 2, expected_likers = 5;

  AdvertisingPredictor ap;
  // Act
  auto actual_likers = ap.predict(day);

  // Assert
  BOOST_CHECK_EQUAL(expected_likers, actual_likers);
}

BOOST_AUTO_TEST_SUITE_END()