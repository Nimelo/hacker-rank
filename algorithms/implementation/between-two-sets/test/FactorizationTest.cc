#define BOOST_TEST_MODULE FactorizationTest

#include "Factorization.hpp"
#include <vector>
#include <cstdint>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(FactorizationSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldReturnCorrectFactors)
{
  // Arrange
  int number = 14;
  vector<int> expected_factors = { 1, 2, 7 };
  
  Factorization<int> factorization(number);
  
  // Act
  auto actual_factors = factorization.get();

  // Assert
  BOOST_CHECK_EQUAL_COLLECTIONS(
    expected_factors.begin(),
    expected_factors.end(),
    actual_factors.begin(),
    actual_factors.end()
  );
}

BOOST_AUTO_TEST_CASE(ShouldReturnCorrectFactors_2)
{
  // Arrange
  int number = 8;
  vector<int> expected_factors = { 1, 2, 2, 2 };
  
  Factorization<int> factorization(number);
  
  // Act
  auto actual_factors = factorization.get();

  // Assert
  BOOST_CHECK_EQUAL_COLLECTIONS(
    expected_factors.begin(),
    expected_factors.end(),
    actual_factors.begin(),
    actual_factors.end()
  );
}

BOOST_AUTO_TEST_CASE(ShouldReturnCorrectFactors_3)
{
  // Arrange
  int number = 42;
  vector<int> expected_factors = { 1, 2, 3, 7 };
  
  Factorization<int> factorization(number);
  
  // Act
  auto actual_factors = factorization.get();

  // Assert
  BOOST_CHECK_EQUAL_COLLECTIONS(
    expected_factors.begin(),
    expected_factors.end(),
    actual_factors.begin(),
    actual_factors.end()
  );
}

BOOST_AUTO_TEST_SUITE_END()