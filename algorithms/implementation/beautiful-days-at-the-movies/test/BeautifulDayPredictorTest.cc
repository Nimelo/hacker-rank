#define BOOST_TEST_MODULE BeautifulDayPredictorTest

#include "BeautifulDayPredictor.hpp"
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(BeautifulDayPredictorSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
  // Arrange
  size_t start_day = 20, end_day = 20;
  size_t divisor = 6, expected = 1;

  BeautifulDayPredictor predictor(start_day, end_day);
  
  // Act
  auto actual = predictor.count(divisor);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
  // Arrange
  size_t start_day = 21, end_day = 21;
  size_t divisor = 6, expected = 0;

  BeautifulDayPredictor predictor(start_day, end_day);
  
  // Act
  auto actual = predictor.count(divisor);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_3)
{
  // Arrange
  size_t start_day = 22, end_day = 22;
  size_t divisor = 6, expected = 1;

  BeautifulDayPredictor predictor(start_day, end_day);
  
  // Act
  auto actual = predictor.count(divisor);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_4)
{
  // Arrange
  size_t start_day = 23, end_day = 23;
  size_t divisor = 6, expected = 0;

  BeautifulDayPredictor predictor(start_day, end_day);
  
  // Act
  auto actual = predictor.count(divisor);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_SUITE_END()