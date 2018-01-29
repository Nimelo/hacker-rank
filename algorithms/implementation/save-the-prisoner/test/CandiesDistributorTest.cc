#define BOOST_TEST_MODULE CandiesDistributorTest

#include "CandiesDistributor.hpp"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(CandiesDistributorSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
  // Arrange
  size_t prisoners = 5, candies = 2, index = 1;
  size_t expected = 2;

  CandiesDistributor checker;
  
  // Act
  auto actual = checker.warn_prisoner(prisoners, candies, index);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
  // Arrange
  size_t prisoners = 5, candies = 2, index = 2;
  size_t expected = 3;

  CandiesDistributor checker;
  
  // Act
  auto actual = checker.warn_prisoner(prisoners, candies, index);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_3)
{
  // Arrange
  size_t prisoners = 5, candies = 3, index = 5;
  size_t expected = 2;

  CandiesDistributor checker;
  
  // Act
  auto actual = checker.warn_prisoner(prisoners, candies, index);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_4)
{
  // Arrange
  size_t prisoners = 5, candies = 4, index = 4;
  size_t expected = 2;

  CandiesDistributor checker;
  
  // Act
  auto actual = checker.warn_prisoner(prisoners, candies, index);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_5)
{
  // Arrange
  size_t prisoners = 5, candies = 10, index = 4;
  size_t expected = 3;

  CandiesDistributor checker;
  
  // Act
  auto actual = checker.warn_prisoner(prisoners, candies, index);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_SUITE_END()