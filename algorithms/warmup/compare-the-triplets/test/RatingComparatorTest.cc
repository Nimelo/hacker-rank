#define BOOST_TEST_MODULE RatingComparatorTest

#include "RatingComparator.hpp"
#include <tuple>
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(RatingComparatorSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldReturnZeroZero)
{
    // Arrange
    vector<int> first = {1, 2, 3};
    vector<int> second = {1, 2, 3};

    RatingComparator<int> rc(first, second);
    
    // Act
    auto actual_result = rc.get();

    // Assert
    BOOST_CHECK_EQUAL(0, std::get<0>(actual_result));
    BOOST_CHECK_EQUAL(0, std::get<1>(actual_result));
}

BOOST_AUTO_TEST_CASE(ShouldReturnOneZero)
{
    // Arrange
    vector<int> first = {4, 2, 3};
    vector<int> second = {1, 2, 3};

    RatingComparator<int> rc(first, second);
    
    // Act
    auto actual_result = rc.get();

    // Assert
    BOOST_CHECK_EQUAL(1, std::get<0>(actual_result));
    BOOST_CHECK_EQUAL(0, std::get<1>(actual_result));
}

BOOST_AUTO_TEST_CASE(ShouldReturnOneTwo)
{
    // Arrange
    vector<int> first = {4, 2, 3};
    vector<int> second = {1, 9, 33};

    RatingComparator<int> rc(first, second);
    
    // Act
    auto actual_result = rc.get();

    // Assert
    BOOST_CHECK_EQUAL(1, std::get<0>(actual_result));
    BOOST_CHECK_EQUAL(0, std::get<1>(actual_result));
}

BOOST_AUTO_TEST_SUITE_END()