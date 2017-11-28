#define BOOST_TEST_MODULE LCMTest

#include "LCM.hpp"
#include <vector>
#include <cstdint>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(LCMSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldCorrectlyReturnLeastCommonMultiple)
{
    // Arrange
    vector<int> numbers = { 1, 7, 9 };
    int expected_lcm = 1 * 7 * 9;
    
    LCM<int> lcm(numbers);
    
    // Act
    auto actual_lcm  = lcm.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_lcm, actual_lcm);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyReturnLeastCommonMultiple_2)
{
    // Arrange
    vector<int> numbers = { 48, 180 };
    int expected_lcm = 720;
    
    LCM<int> lcm(numbers);
    
    // Act
    auto actual_lcm  = lcm.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_lcm, actual_lcm);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyReturnLeastCommonMultiple_3)
{
    // Arrange
    vector<int> numbers = { 21, 6 };
    int expected_lcm = 42;
    
    LCM<int> lcm(numbers);
    
    // Act
    auto actual_lcm  = lcm.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_lcm, actual_lcm);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyReturnLeastCommonMultiple_4)
{
    // Arrange
    vector<int> numbers = { 8, 9, 21 };
    int expected_lcm = 504;
    
    LCM<int> lcm(numbers);
    
    // Act
    auto actual_lcm  = lcm.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_lcm, actual_lcm);
}

BOOST_AUTO_TEST_SUITE_END()