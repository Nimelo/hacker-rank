#define BOOST_TEST_MODULE GCDTest

#include "GCD.hpp"
#include <vector>
#include <cstdint>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(GCDSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldCorrectlyReturnGreatestCommonDivisor)
{
    // Arrange
    vector<int> numbers = { 4, 16, 256 };
    int expected_gcd = 4;
    
    GCD<int> gcd(numbers);
    
    // Act
    auto actual_gcd  = gcd.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_gcd, actual_gcd);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyReturnGreatestCommonDivisor_2)
{
    // Arrange
    vector<int> numbers = { 18, 84 };
    int expected_gcd = 6;
    
    GCD<int> gcd(numbers);
    
    // Act
    auto actual_gcd  = gcd.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_gcd, actual_gcd);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyReturnGreatestCommonDivisor_3)
{
    // Arrange
    vector<int> numbers = { 48, 180 };
    int expected_gcd = 12;
    
    GCD<int> gcd(numbers);
    
    // Act
    auto actual_gcd  = gcd.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_gcd, actual_gcd);
}

BOOST_AUTO_TEST_SUITE_END()