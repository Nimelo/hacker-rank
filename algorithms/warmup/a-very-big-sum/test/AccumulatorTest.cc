#define BOOST_TEST_MODULE AccumulatorTest

#include "Accumulator.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(AccumulatorSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldCorrectlyVectorOfIntegers)
{
    // Arrange
    vector<long long> values = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    long long expected_sum = 5000000015;
    Accumulator<long long, long long> accumulator(values);
    
    // Act
    auto actual_sum = accumulator.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_sum, actual_sum);
}

BOOST_AUTO_TEST_CASE(ShouldReturnZero)
{
    // Arrange
    vector<long long> values;
    long long expected_sum = 0;
    Accumulator<long long, long long> accumulator(values);
    
    // Act
    auto actual_sum = accumulator.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_sum, actual_sum);
}

BOOST_AUTO_TEST_SUITE_END()