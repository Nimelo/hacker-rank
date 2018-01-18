#define BOOST_TEST_MODULE HeightPredictorTest

#include "HeightPredictor.hpp"
#include <vector>
#include <tuple>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(HeightPredictorSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_01)
{
  // Arrange
  size_t cycles = 0, expected_height = 1;

  HeightPredictor hp(cycles);
  
  // Act
  auto predicted_height = hp.predict();

  // Assert
  BOOST_CHECK_EQUAL(expected_height, predicted_height);
}

BOOST_AUTO_TEST_CASE(TestScenario_02)
{
  // Arrange
  size_t cycles = 1, expected_height = 2;

  HeightPredictor hp(cycles);
  
  // Act
  auto predicted_height = hp.predict();

  // Assert
  BOOST_CHECK_EQUAL(expected_height, predicted_height);
}

BOOST_AUTO_TEST_CASE(TestScenario_03)
{
  // Arrange
  size_t cycles = 4, expected_height = 7;

  HeightPredictor hp(cycles);
  
  // Act
  auto predicted_height = hp.predict();

  // Assert
  BOOST_CHECK_EQUAL(expected_height, predicted_height);
}

BOOST_AUTO_TEST_SUITE_END()