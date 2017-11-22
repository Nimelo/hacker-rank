#define BOOST_TEST_MODULE SummationTest

#include "Summation.hpp"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(SummationSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldCorrectlyVectorOfIntegers)
{
    // Arrange
    vector<int> summands{1, 2, 3, 4, 10, 11};
    int expected_sum = 31;

    auto summation = Summation<int>(summands);
    
    // Act
    auto actual_sum = summation.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_sum, actual_sum);
}

BOOST_AUTO_TEST_CASE(ShouldReturnZeroForNoSummands)
{
    // Arrange
    vector<int> summands;
    int expected_sum = 0;

    auto summation = Summation<int>(summands);
    
    // Act
    auto actual_sum = summation.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_sum, actual_sum);
}

BOOST_AUTO_TEST_SUITE_END()