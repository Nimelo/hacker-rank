#define BOOST_TEST_MODULE FruitFallCalculatorTest

#include "FruitFallCalculator.hpp"
#include <vector>
#include <tuple>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(FruitFallCalculatorSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldCorrectlyCalculateNumberOfItems)
{
    // Arrange
    auto house_start_pos = 7;
    auto house_end_pos = 11;
    auto apple_tree_pos = 5;
    auto orange_tree_pos = 15;
    vector<int> apple_distances = { -2, 2, 1 };
    vector<int> orange_distances = { 5, -6 };

    FruitFallCalculator ffc(
      house_start_pos,
      house_end_pos,
      apple_tree_pos,
      orange_tree_pos);
    
    // Act
    auto tuple = ffc.getNumberOfFruitsFallenOnHouse(apple_distances, orange_distances);

    // Assert
    BOOST_CHECK_EQUAL(1, get<0>(tuple));
    BOOST_CHECK_EQUAL(1, get<1>(tuple));
}

BOOST_AUTO_TEST_SUITE_END()