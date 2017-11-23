#define BOOST_TEST_MODULE DiagonalDifferenceTest

#include "DiagonalDifference.hpp"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(DiagonalDifferenceSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldCorrectlyCalculateDiagonalDifference)
{
    // Arrange
    vector<vector<int>> matrix = {{ 11, 2, 4 }, { 4, 5, 6 }, { 10, 8, -12 }};
    int expected_difference = 15;

    DiagonalDifference<int> dd(matrix);
    
    // Act
    auto actual_difference = dd.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_difference, actual_difference);
}

BOOST_AUTO_TEST_CASE(ShouldReturn0)
{
    // Arrange
    vector<vector<int>> matrix;
    int expected_difference = 0;

    DiagonalDifference<int> dd(matrix);
    
    // Act
    auto actual_difference = dd.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_difference, actual_difference);
}

BOOST_AUTO_TEST_SUITE_END()