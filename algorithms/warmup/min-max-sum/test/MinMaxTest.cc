#define BOOST_TEST_MODULE MinMaxSumTest

#include "MinMaxSum.hpp"
#include <vector>
#include <tuple>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(MinMaxSumSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldCorrectlyFindMinMaxSum_1)
{
    // Arrange
    vector<int> numbers = { 1, 2, 3, 4, 5 };

    MinMaxSum<int> min_max_sum(numbers);
    
    // Act
    auto min_max = min_max_sum.get<long long>(4);

    // Assert
    BOOST_CHECK_EQUAL(10, get<0>(min_max));
    BOOST_CHECK_EQUAL(14, get<1>(min_max));
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyFindMinMaxSumForEmptyVector)
{
    // Arrange
    vector<int> numbers;

    MinMaxSum<int> min_max_sum(numbers);
    
    // Act
    auto min_max = min_max_sum.get<long long>(0);

    // Assert
    BOOST_CHECK_EQUAL(0, get<0>(min_max));
    BOOST_CHECK_EQUAL(0, get<1>(min_max));
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyFindMinMaxSumForVectorLength1)
{
    // Arrange
    vector<int> numbers = { 2 };

    MinMaxSum<int> min_max_sum(numbers);
    
    // Act
    auto min_max = min_max_sum.get<long long>(1);

    // Assert
    BOOST_CHECK_EQUAL(2, get<0>(min_max));
    BOOST_CHECK_EQUAL(2, get<1>(min_max));
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyFindMinMaxSumForVectorLengt2)
{
    // Arrange
    vector<int> numbers = { 2, 3 };

    MinMaxSum<int> min_max_sum(numbers);
    
    // Act
    auto min_max = min_max_sum.get<long long>(2);

    // Assert
    BOOST_CHECK_EQUAL(5, get<0>(min_max));
    BOOST_CHECK_EQUAL(5, get<1>(min_max));
}

BOOST_AUTO_TEST_SUITE_END()