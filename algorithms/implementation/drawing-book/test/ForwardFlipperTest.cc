#define BOOST_TEST_MODULE ForwardFlipperTest

#include "ForwardFlipper.hpp"
#include <vector>
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(ForwardFlipperSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
    // Arrange
    size_t n = 6, p = 2;
    size_t expected_distance = 1;

    ForwardFlipper flipper;
    
    // Act
    auto actual_distance = flipper.distance(n, p);

    // Assert
    BOOST_CHECK_EQUAL(expected_distance, actual_distance);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
    // Arrange
    size_t n = 5, p = 4;
    size_t expected_distance = 2;

    ForwardFlipper flipper;
    
    // Act
    auto actual_distance = flipper.distance(n, p);

    // Assert
    BOOST_CHECK_EQUAL(expected_distance, actual_distance);
}

BOOST_AUTO_TEST_SUITE_END()