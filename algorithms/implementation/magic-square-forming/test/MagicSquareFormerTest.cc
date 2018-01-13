#define BOOST_TEST_MODULE MagicSquareFormerTest

#include "MagicSquareFormer.hpp"
#include <vector>
#include <tuple>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(MagicSquareFormerSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
    // Arrange
    vector<int> magic_square = { 4, 9, 2, 3, 5, 7, 8, 1, 5 };
    MagicSquareFormer msf(magic_square);
    int expected_formation_cost = 1;
    
    // Act
    auto actual_formation_cost = msf.cost();

    // Assert
    BOOST_CHECK_EQUAL(expected_formation_cost, actual_formation_cost);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
    // Arrange
    vector<int> magic_square = { 4, 8, 2, 4, 5, 7, 6, 1, 6 };
    MagicSquareFormer msf(magic_square);
    int expected_formation_cost = 4;
    
    // Act
    auto actual_formation_cost = msf.cost();

    // Assert
    BOOST_CHECK_EQUAL(expected_formation_cost, actual_formation_cost);
}

BOOST_AUTO_TEST_SUITE_END()