#define BOOST_TEST_MODULE MagicBeverageEstimatorTest

#include "MagicBeverageEstimator.hpp"
#include <vector>
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(MagicBeverageEstimatorSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
    // Arrange
    vector<int> hurdle_heights = { 1, 6, 3, 5, 2 };
    int jump_height = 4;
    size_t expected_beverages = 2;

    MagicBeverageEstimator mbe(hurdle_heights);
    
    // Act
    auto actual_beverages = mbe.estimate(jump_height);

    // Assert
    BOOST_CHECK_EQUAL(expected_beverages, actual_beverages);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
    // Arrange
    vector<int> hurdle_heights = { 2, 4, 4, 5, 2 };
    int jump_height = 7;
    size_t expected_beverages = 0;

    MagicBeverageEstimator mbe(hurdle_heights);
    
    // Act
    auto actual_beverages = mbe.estimate(jump_height);

    // Assert
    BOOST_CHECK_EQUAL(expected_beverages, actual_beverages);
}

BOOST_AUTO_TEST_SUITE_END()